#pragma once
#include "Shop.h"
class Book :
    public Shop
{
private:
	double cost;
	std::string title, author, annotation, genre;
	int year_of_issue, page_volume;

public:
	virtual std::string getData() override;
};

