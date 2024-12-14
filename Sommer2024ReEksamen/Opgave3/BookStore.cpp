#include "BookStore.h"
#include "Book.h"
#include <vector>
//Opgave 3 e)
    BookStore::BookStore(int id) {
        this -> id = id;
    }

    std::vector<Book> BookStore::findUsedBooks() {
        std::vector<Book> usedBooks;
        for (Book book: this ->books) {
            if (book.isUsed()) {
                usedBooks.push_back(book);
            }
        }
        return usedBooks;
    }

    std::vector<Book> BookStore::findBooksByAutor(std::string author) {
        std::vector<Book> bookReturn;
        for (Book book: this -> books) {
            if (book.getAuthor()==author) {
                bookReturn.push_back(book);
            }
        }
    return bookReturn;
    }
    void BookStore::addBook(int isbn, std::string author, bool used) {
        Book book(isbn, author, used);
        books.push_back(book);
    }
