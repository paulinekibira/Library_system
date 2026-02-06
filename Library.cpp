#include "Library.h"
#include <iostream>
using namespace std;

void Library::addBook(Book book) {
    books.push_back(book);
}

void Library::removeBook(int id) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getId() == id) {
            books.erase(it);
            cout << "Book removed.\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

void Library::searchBook(string title) {
    for (auto &b : books) {
        if (b.getTitle() == title) {
            cout << "Found: " << b.getTitle() << " by " << b.getAuthor() << endl;
            return;
        }
    }
    cout << "Book not found.\n";
}

void Library::addUser(User user) {
    users.push_back(user);
}

void Library::borrowBook(int bookId) {
    for (auto &b : books) {
        if (b.getId() == bookId && !b.getStatus()) {
            b.borrowBook();
            cout << "Book borrowed.\n";
            return;
        }
    }
    cout << "Book not available.\n";
}

void Library::returnBook(int bookId) {
    for (auto &b : books) {
        if (b.getId() == bookId && b.getStatus()) {
            b.returnBook();
            cout << "Book returned.\n";
            return;
        }
    }
    cout << "Invalid return attempt.\n";
}
