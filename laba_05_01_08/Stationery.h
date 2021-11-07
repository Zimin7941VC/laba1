#pragma once
#include "Shop.h"
class Stationery :
    public Shop
{
private:
	std::string type, color, purpose;

public:
	Stationery(double cost, std::string type, std::string color, std::string purpose);
	~Stationery();
	virtual std::string getData() override;
	virtual std::string getPrintData() override;
};

