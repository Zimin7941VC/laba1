#pragma once
#include <iostream>
#include <string>
class Shop
{
protected:
	double cost;

public:
	Shop(double cost);
	virtual ~Shop();
	virtual std::string getData() = 0;
	virtual std::string getPrintData() = 0;
};

