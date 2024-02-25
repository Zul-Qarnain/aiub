/*Write a C++ program that prompts the user to input a character. The program should then determine
whether the entered character is a vowel or a consonant and display the result.*/
#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "The character '" << ch << "' is a vowel." << endl;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        cout << "The character '" << ch << "' is a consonant." << endl;
    else
        cout << "Invalid input: Not a letter." << endl;
    return 0;
}
