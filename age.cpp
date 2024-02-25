/*Write a C++ program to classify a person into different age groups based on their age input. The program
should prompt the user to input their age, and then classify them into one of the following age groups: */
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 0 && age <= 12)
        cout << "You are classified as a Child." << endl;
    else if (age >= 13 && age <= 19)
        cout << "You are classified as a Teenager." << endl;
    else if (age >= 20 && age <= 59)
        cout << "You are classified as an Adult." << endl;
    else if (age >= 60)
        cout << "You are classified as a Senior." << endl;
    else
        cout << "Invalid age entered." << endl;
    return 0;
}
