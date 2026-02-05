#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Constructor with default arguments
    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    // Display function
    void display() const {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : $" << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {

    // Default constructor
    Book b1;
    
    // Parameterized constructor
    Book b2("1984", "George Orwell", 15.99);
    
    // Copy constructor
    Book b3(b2);
    
    // Constructor with default arguments (only title)
    Book b4("Art of Persuassion");

    // Display all books
    cout << "Book 1 Details:" << endl;
    b1.display();

    cout << "Book 2 Details:" << endl;
    b2.display();

    cout << "Book 3 Details (Copied):" << endl;
    b3.display();

    cout << "Book 4 Details (Default Args):" << endl;
    b4.display();

    return 0;
}