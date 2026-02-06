// Library.h
#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "Book.h"
#include "User.h"

class Library {
private:
    vector<Book> books;
    vector<User> users;

public:
    void addBook(Book book);
    void removeBook(int id);
    void searchBook(string title);
    void addUser(User user);
    void borrowBook(int bookId);
    void returnBook(int bookId);
};

#endif
