#include "Book.h"

Book::Book(int id, string title, string author) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->isBorrowed = false;
}

int Book::getId() { return id; }
string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
bool Book::getStatus() { return isBorrowed; }

void Book::borrowBook() { isBorrowed = true; }
void Book::returnBook() { isBorrowed = false; }
