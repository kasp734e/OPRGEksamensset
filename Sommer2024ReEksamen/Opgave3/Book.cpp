#include "Book.h"
#include <string>
// Opgave 3 b)

    Book::Book(int isbn, std::string author, bool used) {
        this -> isbn = isbn;
        this -> author = author;
        this -> used = used;
    }
    int Book::getIsbn() {
        return this ->isbn;
    }

    std::string Book::getAuthor() {
        return this -> author;
    }

    bool Book::isUsed() {
        return this -> used;
    }

    std::string Book::toString() {
        return "ISBN:" + std::to_string(isbn) + " Author:" + author + " isUsed" + std::to_string(used);
    }
