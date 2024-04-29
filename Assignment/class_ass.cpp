#include <iostream>
#include <string>
using namespace std;
int opt;
int count = -1;
int amount = 0;
int quantity = 0;
int slaebook[500];
int k = 0;
struct Book {
    std::string* author;
    std::string* genre;
    std::string* title;
    float* price;
    int* isbn;
    int* stock;
    Book(int size) {
        author = new std::string[size];
        genre = new std::string[size];
        title = new std::string[size];
        price = new float[size];
        isbn = new int[size];
        stock = new int[size];
    }
    ~Book() {
        delete[] author;
        delete[] title;
        delete[] price;
        delete[] genre;
        delete[] isbn;
    }
    void addbook() {
        cout << "--- Add New Book ---" << endl;
        cout << "Enter ISBN: ";
        cin >> isbn[count];
        cout << "Enter Your Title: ";
        cin >> title[count];
        cout << "Enter Author: ";
        cin >> author[count];
        cout << "Enter Genre: ";
        cin >> genre[count];
        cout << "Enter Stock: ";
        cin >> stock[count];
        cout << "Enter price: ";
        cin >> price[count];
    }
    void displaybook() {
        for (int i = 0; i <= count; i++) {
            cout << "Isbn: " << isbn[i];
            cout << ", ";
            cout << "Title: " << title[i];
            cout << ", ";
            cout << "Author: " << author[i];
            cout << ", ";
            cout << "Stock: " << stock[i];
            cout << ", ";
            cout << "Price: " << price[i];
            cout << ", ";
            cout << "Genre: " << genre[i];
            cout << ";";
            cout << "\n";
        }
    }
    int linearSearch(int isbn[], int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (isbn[i] == target) {
                return i;
            }
        }
        return -1;
    }
    void updateBook() {
        cout << "---Update Stock---\n";
        int target;
        int size = count + 1;
        std::cout << "Enter your target: ";
        std::cin >> target;
        int index = linearSearch(isbn, size, target);
        if (index != -1) {
            cout << "Book has been found! ";
            cout << "Enter your new stock: ";
            cin >> stock[index];
            cout << "\nStock is update to: " << stock[index] << "\n";
        }
        else {
            std::cout << "There is no book with this isbn\n";
        }
    }

    void Processsale() {
        cout << "---Process Sale Serviec---\n";
        int target;
        int size = count + 1;
        std::cout << "Enter your target: ";
        std::cin >> target;
        int index = linearSearch(isbn, size, target);
        if (index != -1) {
            cout << "Book has been found! \n";
            cout << "\nEnter amount of book you want: ";
            cin >> quantity;
            stock[index] = stock[index] - quantity;
            amount = amount + (quantity * price[index]);
            slaebook[k] = isbn[index];
            k = k + 1;
        }
        else {
            std::cout << "There is no book with this isbn\n";
        }
    }
void slaereport() {
    cout << "---Generate Sales Report Serviec---\n";
    cout << "\nBooks Isbn that hasbeen sold yet: ";
    for (int f = 0; f < k; f++) {
        cout << slaebook[f] << ", ";
    }
    cout << "; Sales amount: " << amount << ", ";
    cout << "; quantity: " << quantity<<"\n";
}

};
void showinfo() {
    cout << "Bookstore Inventory Management System\n";
    cout << "1. Add New Book\n";
    cout << "2. Display All Books\n";
    cout << "3. Update Stock\n";
    cout << "4. Process Sale\n";
    cout << "5. Generate Sales Report\n";
    cout << "6. Exit\n";
    cout << "Please select an option: ";
    cin >> opt;
}
int main(void) {
    Book b1(500);
    while (true) {
        showinfo();
        switch (opt) {
        case 1:
            count = count + 1;
            b1.addbook();
            break;
        case 2:
            b1.displaybook();
            break;
        case 3:
            b1.updateBook();
            break;
        case 4:
            b1.Processsale();
            break;
        case 5:
        	b1.slaereport();
        	break;
        case 6:
            cout << "\nThank You for using My software. Good bye :)\n";
            break;
        default:
            cout << "Something went wrong :( \n";
        }
        if (opt == 6) {
            break;
        }
    }
}
//24-56547-1