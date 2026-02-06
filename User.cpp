#include "User.h"

User::User(int id, string name) {
    this->userId = id;
    this->name = name;
}

int User::getId() { return userId; }
string User::getName() { return name; }
