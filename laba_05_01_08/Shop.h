#pragma once
#include <string>
class Shop
{
protected:
	double cost;

public:
	virtual std::string getData() = 0;
};

