#include <iostream>
#include <string>
using namespace std;
int i;
struct Employee
{
    int id;
    string name;
    float salary;
    void show()
    {
        cout << "Employee " << i + 1 << " name is: " << name << "\n";
        cout << "Employee " << i + 1 << " salary with 10% increase: " << (salary + (salary * 0.1)) << "\n";
        cout << "Employee " << i + 1 << " id is: " << id << "\n";
        cout << "\n";
    }
};
int main(void)
{
    Employee E[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter id for Employee " << i + 1 << " : ";
        cin >> E[i].id;
        cout << "Please enter salary for Employee " << i + 1 << " : ";
        cin >> E[i].salary;
        cin.ignore();
        cout << "Enter name for Employee " << i + 1 << " : ";
        getline(cin, E[i].name);
        cout << "\n";
    }
    for (int i = 0; i < 3; i++) 
    {
        cout << "INFORMATION FOR Employee " << i + 1 << "\n";
        E[i].show();
        cout << "\n";
    }
}
