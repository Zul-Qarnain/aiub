#include <iostream>
class Volume {
private:
    double length;
    double breadth;
    double height;
public:
    Volume(double l, double b, double h) : length(l), breadth(b), height(h) {}
    double calculateVolume() {
        return length * breadth * height;
    }
};
int main() {
    double length = 5.0;
    double breadth = 3.0;
    double height = 2.0;
    Volume box(length, breadth, height);
    std::cout << "Volume of the box: " << box.calculateVolume() << std::endl;
    return 0;
}
