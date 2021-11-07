#pragma once
#include "Shop.h"
class Textbook :
    public Shop
{
private:
	std::string title, author, institution;
	int year_of_issue, page_volume, year_of_study;

public:
	Textbook(double cost, std::string title, std::string author, std::string institution, int year_of_issue, int page_volume, int year_of_study);
	~Textbook();
	virtual std::string getData() override;
	virtual std::string getPrintData() override;
};

