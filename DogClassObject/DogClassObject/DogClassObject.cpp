#include <iostream>
#include <string>


class Dog {
private:
    std::string breed;
    std::string color;
    int height;
    int weight;

public:
    Dog(std::string brd, std::string clr, int hgt, int wgt)
        : breed(brd), color(clr), height(hgt), weight(wgt) {}

    void shake() const {
        std::cout << "The dog shakes." << std::endl;
    }

    void sit() const {
        std::cout << "The dog sits." << std::endl;
    }

    void layDown() const {
        std::cout << "The dog lays down." << std::endl;
    }

    void displayState() const {
        std::cout << "Breed: " << breed << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Height: " << height << " feet" << std::endl;
        std::cout << "Weight: " << weight << " pounds" << std::endl;
    }
};

int main() {
    Dog myDog("Hound", "Brown", 2, 60);

    myDog.displayState();
    myDog.shake();
    myDog.sit();
    myDog.layDown();

    return 0;
}
