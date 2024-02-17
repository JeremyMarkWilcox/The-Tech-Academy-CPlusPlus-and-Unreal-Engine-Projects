    #include <iostream>
    #include <string>
    #include <cmath>
    #ifndef M_PI
    #define M_PI 3.14159265358979323846
    #endif

    class Shape {
    protected:
        std::string color;

    public:
        Shape(const std::string& col) : color(col) {}

        virtual double getArea() const = 0; 

        std::string getColor() const {
            return color;
        }
    };

    class Rectangle : public Shape {
    private:
        double height;
        double width;

    public:
        Rectangle(const std::string& col, double h, double w)
            : Shape(col), height(h), width(w) {}

        double getArea() const override {
            return height * width;
        }
    };

    class Triangle : public Shape {
    private:
        double base;
        double height;

    public:
        Triangle(const std::string& col, double b, double h)
            : Shape(col), base(b), height(h) {}

        double getArea() const override {
            return 0.5 * base * height;
        }
    };

    class Circle : public Shape {
    private:
        double radius;

    public:
        Circle(const std::string& col, double r)
            : Shape(col), radius(r) {}

        double getArea() const override {
            return M_PI * radius * radius;
        }
    };

    int main() {
        Rectangle rect("red", 5.0, 3.0);
        Triangle tri("blue", 4.0, 2.5);
        Circle circ("green", 2.0);

        std::cout << "Rectangle color: " << rect.getColor() << ", Area: " << rect.getArea() << std::endl;
        std::cout << "Triangle color: " << tri.getColor() << ", Area: " << tri.getArea() << std::endl;
        std::cout << "Circle color: " << circ.getColor() << ", Area: " << circ.getArea() << std::endl;

        return 0;
    }
