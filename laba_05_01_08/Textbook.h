#pragma once
#include "Shop.h"
class Textbook :
    public Shop
{
private:
	double cost;
	std::string title, author, institution;
	int year_of_issue, page_volume, year_of_study;

public:
	virtual std::string getData() override;
};

