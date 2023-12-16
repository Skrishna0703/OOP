#include <iostream>
#include <string>
using namespace std;
class Publication {
private:
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};
class Book : public Publication {
private:
    int pageCount;
public:
    void getdata() {
        Publication::getdata();  // Call base class getdat
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putdata() const {
        Publication::putdata();  // Call base class putdata
        cout << "Page Count: " << pageCount << endl;
    }
};
class Tape : public Publication {
private:
    float playingTime;
public:
    void getdata() {
        Publication::getdata();  // Call base class getdata
        cout << "Enter playing time (in minutes): ";
        cin >>playingTime;
    }
    void putdata() const 
	{
        Publication::putdata();  // Call base class putdata
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};
int main() {
    Book book;
    Tape tape;
    cout << "Enter book details:\n";
    book.getdata();
    cout << "\nEnter tape details:\n";
    tape.getdata();
    cout << "\nBook Details:\n";
    book.putdata();
    cout << "\nTape Details:\n";
    tape.putdata();
    return 0;
}

