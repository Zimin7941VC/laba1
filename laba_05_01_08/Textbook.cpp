#include "Textbook.h"

Textbook::Textbook(double cost, std::string title, std::string author, std::string institution, int year_of_issue, int page_volume, int year_of_study) :
    Shop(cost), title(title), author(author), institution(institution), year_of_issue(year_of_issue), page_volume(page_volume), year_of_study(year_of_study) {
    std::cout << "Textbook(cost, title, author, institution, year_of_issue, page_volume, year_of_study)\n";
}

Textbook::~Textbook()
{
    std::cout << "~Textbook()\n";
}

std::string Textbook::getData()
{
	return "Textbook\n" +
		std::to_string(cost) + "\n" +
		title + "\n" +
		author + "\n" +
		institution + "\n" +
		std::to_string(year_of_issue) + "\n" +
		std::to_string(page_volume) + "\n" +
		std::to_string(year_of_study) + "\n";
}

std::string Textbook::getPrintData()
{
	return "Учебник: \n\tназвание: " + title +
		"\n\tавтор: " + author +
		"\n\tгод выпуска: " + std::to_string(year_of_issue) +
		"\n\tучебное заведение: " + institution +
		"\n\tгод обучения: " + std::to_string(year_of_issue) +
		"\n\tобъем страниц: " + std::to_string(page_volume) +
		"\n\tстоимость: " + std::to_string(cost) + "\n";
}
