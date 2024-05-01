#include <iostream>
#include <string>
using namespace std;
struct candidate {
    string name, time, location, position;
    int age;
    string mobilenum;
    void set(string name, int age, string time, string location, string position, string mobilenum) {
        this->name = name;
        this->age = age;
        this->time = time;
        this->location = location;
        this->position = position;
        this->mobilenum = mobilenum;
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
    candidate c1,c2;
    c1.set("Shihab", 18, "00:00", "Bangladesh", "CEO", "123334443");
    c2.set("Shuchi", 20, "10:00", "Bangladesh", "CTO", "123456789");
    c1.show();
    c2.show();
    return 0;
}
