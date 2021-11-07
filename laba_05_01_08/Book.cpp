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
	return " нига: \n\tназвание: " + title +
		"\n\tавтор: " + author +
		"\n\tгод выпуска: " + std::to_string(year_of_issue) +
		"\n\tаннотаци€: " + annotation +
		"\n\tжанр: " + genre +
		"\n\tобъем страниц: " + std::to_string(page_volume) +
		"\n\tстоимость: " + std::to_string(cost) + "\n";
}
