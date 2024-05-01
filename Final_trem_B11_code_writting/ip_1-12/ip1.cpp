#include <iostream>
#include <string>
using namespace std;

struct candidate {
    string name, time, location, position;
    int age, mobilenum;
    
    void set() {
        cout << "Please enter name: ";
        getline(cin, name);
        
        cout << "Please enter age: ";
        cin >> age;
        cin.ignore(); // Clear the input buffer
        
        cout << "Please enter phone number: ";
        cin >> mobilenum;
        cin.ignore(); // Clear the input buffer
        
        cout << "Please enter location: ";
        getline(cin, location);
        
        cout << "Please enter position: ";
        getline(cin, position);
        
        cout << "\n";
    }
    
    void show() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Phone number: " << mobilenum << "\n";
        cout << "Location: " << location << "\n";
        cout << "Position: " << position << "\n";
        cout << "\n";
    }
};

int main() {
    candidate c1, c2;
    c1.set();
    c2.set();
    c1.show();
    c2.show();
    return 0;
}
