#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;

    lib.addBook(Book(1, "Clean Code", "Robert Martin"));
    lib.addBook(Book(2, "C++ Primer", "Lippman"));

    lib.addUser(User(1, "John"));

    lib.searchBook("Clean Code");
    lib.borrowBook(1);
    lib.borrowBook(1); // Negative test
    lib.returnBook(1);
    lib.removeBook(2);

    return 0;
}
