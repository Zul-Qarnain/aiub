/*Write a C++ program to determine the type of a triangle based on the lengths of its sides. The program
should prompt the user to input three integer values representing the lengths of the sides of a triangle. Then,
it should determine whether the triangle is equilateral, isosceles, or scalene, and display the result.*/
#include <iostream>
using namespace std;
int main() {
    int side1, side2, side3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3)
        cout << "The triangle is equilateral." << endl;
    else if (side1 == side2 || side1 == side3 || side2 == side3)
        cout << "The triangle is isosceles." << endl;
    else
        cout << "The triangle is scalene." << endl;
    return 0;
}
