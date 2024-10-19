#include <iostream>
#include <vector>
using namespace std;

// Defines the class book
class Book
{
private:
    string title;
    string author;
    double price;

public:
    // Constructor
    Book(string t, string a, double p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Setter for book Title
    void setTitle(string newTitle)
    {
        title = newTitle;
    }

    string getTitle() const
    {
        return title;
    }

    void setAuthor(string newAuthor)
    {
        author = newAuthor;
    }

    void setPrice(double newPrice)
    {
        price = newPrice;
    }

    void displayBookDetails() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price $" << price << endl;
    }
};

// Main func
int main()
{
    vector<Book> inventory;

    // Created Book instances
    Book book1("Swindle", "Joe Pan", 19.99);
    Book book2("Game of Thrones", "J.J.R. Martin", 45.99);
    Book book3("Halo", "343", 9.99);
    Book book4("Wake", "Tom", 99.99);

    inventory.push_back(book1);
    inventory.push_back(book2);
    inventory.push_back(book3);
    inventory.push_back(book4);

    for (const Book &book : inventory)
    {
        book.displayBookDetails();
    }

    // TODO: Add code to;
    // 1. Create a few book instances and add them to the inventory. >>Check<<
    // 2. Use setters to modify book details if needed.
    // 3. Loop through inventory and display book details

    return 0;
}