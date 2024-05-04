#include<iostream>
using namespace std;

int opt;
float amount;

struct BankAccount {
    std::string accountNumber;
    std::string Name;
    float balance;
};

void showinfo(BankAccount &account) {
    cout << "Name: " << account.Name << "\n";
    cout << "Account Number: " << account.accountNumber << "\n";
    cout << "Balance: " << account.balance << "\n";
}

void deposit(BankAccount &account) {
    if (amount >= 0) {
        account.balance += amount; // Update balance directly
        cout << amount << " amount is added\n";
        cout << account.balance << " :New Balance\n";
    } else {
        cout << "Invalid Money!\n";
    }
}

void withdrawal(BankAccount &account) {
    if (amount <= account.balance) {
        account.balance -= amount; // Update balance directly
        cout << "withdrawal amount is : " << amount << endl;
        cout << "New Balance: " << account.balance << endl;
    } else {
        cout << "Insufficient Balance!\n";
    }
}

int main(void) {
    BankAccount person;
    cout << "Please enter the person name: ";
    getline(cin, person.Name);
    cout << "Please enter the account number: ";
    cin >> person.accountNumber;
    cout << "Please enter the account Balance: ";
    cin >> person.balance;
    while(true){
    	  cout<<"ENter the option: ";
    	  cin>>opt;
        switch (opt) {
            case 1:
                showinfo(person);
                break;
            case 2:
                cout << "Please enter deposit amount: ";
                cin >> amount;
                deposit(person);
                break;
            case 3:
                cout << "Please enter withdrawal amount: ";
                cin >> amount;
                withdrawal(person);
                break;
            case 4:
                cout << "Thank you for using my software :)\n";
                break;
        }
        if (opt == 4) {
            break;}}
    return 0;
}
