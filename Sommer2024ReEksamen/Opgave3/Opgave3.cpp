
#include "Book.h"
#include "BookStore.h"
#include <iostream>
#include <vector>
int main()
{
	// Opgave  3 c)
	std::cout << "Opgave 3c" << std::endl;
	Book DBrown(12345678, "Dan Brown", false);
	std::cout << DBrown.toString() << std::endl;
	//Opgave 3 f-1)
	std::cout << "OpgaveF1" << std::endl;

	BookStore BookStore1(1);


	if (BookStore1.findUsedBooks().empty()) {
	std::cout << "No used books" << std::endl;
	}
	if (BookStore1.findBooksByAutor("H.C Andersen").empty()) {
	std::cout << "No HCAnd" << std::endl;
	}

	//Opgave 3 f-2)
	std::cout << "OpgaveF2" << std::endl;
	BookStore BookStore2(2);

	BookStore2.addBook(123456, "H.C Andersen", true);
	BookStore2.addBook(223456, "H.C Andersen", false);
	BookStore2.addBook(323456, "Dan Brown", true);
	BookStore2.addBook(423456, "Ben Franklin", false);

	std::vector<Book> usedBooks = BookStore2.findUsedBooks();
	for (Book book : usedBooks) {
	   std::cout << book.toString() << std::endl;
	}

	std::vector<Book> HCBooks = BookStore2.findBooksByAutor("H.C Andersen");
	for (Book book : HCBooks) {
	std::cout << book.toString() << std::endl;
	}

	return 0;
}
