#include "Book.h"

Book::Book(double cost, std::string title, std::string author, std::string annotation, std::string genre, int year_of_issue, int page_volume) :
    Shop(cost), title(title), author(author), annotation(annotation), genre(genre), year_of_issue(year_of_issue), page_volume(page_volume) {
    std::cout << "Book(cost, title, author, annotation, genre, year_of_issue, page_volume)\n";
}

Book::~Book()
{
    std::cout << "~Book()\n";
}

std::string Book::getData()
{
	return "Book\n" +
		std::to_string(cost) + "\n" +
		title + "\n" +
		author + "\n" +
		annotation + "\n" +
		genre + "\n" +
		std::to_string(year_of_issue) + "\n" +
		std::to_string(page_volume) + "\n";
}

std::string Book::getPrintData()
{
	return "�����: \n\t��������: " + title +
		"\n\t�����: " + author +
		"\n\t��� �������: " + std::to_string(year_of_issue) +
		"\n\t���������: " + annotation +
		"\n\t����: " + genre +
		"\n\t����� �������: " + std::to_string(page_volume) +
		"\n\t���������: " + std::to_string(cost) + "\n";
}
