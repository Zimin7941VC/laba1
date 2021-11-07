#pragma once
#include "Shop.h"
class Book :
    public Shop
{
private:
	std::string title, author, annotation, genre;
	int year_of_issue, page_volume;

public:
	Book(double cost, std::string title, std::string author, std::string annotation, std::string genre, int year_of_issue, int page_volume);
	~Book();
	virtual std::string getData() override;
	virtual std::string getPrintData() override;
};

