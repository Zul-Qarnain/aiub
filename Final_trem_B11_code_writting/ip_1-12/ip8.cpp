#include <iostream>
#include <string>

using namespace std;

// Define the structure for a Student
struct Student {
    string name;
    int grades[5];
};

int main() {
    // Array of 3 students
    Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; ++i) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter grades for student " << i + 1 << " (5 grades separated by spaces): ";
        for (int j = 0; j < 5; ++j) {
            cin >> students[i].grades[j];
        }
    }

    // Display average grade for each student
    cout << "\nAverage grades:\n";
    for (int i = 0; i < 3; ++i) {
        float sum = 0;
        for (int j = 0; j < 5; ++j) {
            sum += students[i].grades[j];
        }
        float average = sum / 5.0;
        cout << students[i].name << ": " << average << endl;
    }

    return 0;
}
