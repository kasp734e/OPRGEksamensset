#pragma once
//Opgave 3 d)
#include "Book.h"
#include <string>
#include <vector>
class BookStore {
    private:
    int id;
    std::vector<Book> books;

    public:
    BookStore(int id);
    std::vector<Book> findUsedBooks();
    std::vector<Book> findBooksByAutor(std::string author);
    void addBook(int isbn, std::string author, bool used);
};
