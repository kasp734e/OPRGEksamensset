#pragma once
#include <string>
//Opgave 3 a)
class Book {
    private:
    int isbn;
    std::string author;
    bool used;

    public:
    Book(int isbn, std::string author, bool used);
    int getIsbn();
    std::string getAuthor();
    bool isUsed();
    std::string toString();
};
