#include <iostream>
using namespace std;
class output {
    static int id;
    string Name;
    float cgpa;
public:
    output() {
    	cout<<"Name: "<<" Null "<<"ID: "<<id<<"\n";
        cout<< "I am default constructor\n";
    }
    output(string n, float cg) {
        int output = 6;
        id += output;
        Name = n;
        cgpa = cg;
        cout << "<ID>: " << id << " Name : " << n << " cgpa: " << cg << "\n";
        cout << "I am parameterized constructor\n";
    }
    ~output() {
        cout << "ID: " << id << " Name: " << Name << " cgpa: " << cgpa << "\n";
        cout << "I am deleting the destructor\n";
    }
};
int output::id = 1;
int main(void){
    output b;
    output b1("BIPLOP", 3.94);
    output b2("BISWAS", 4.00);
}
