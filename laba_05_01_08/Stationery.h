#pragma once
#include "Shop.h"
class Stationery :
    public Shop
{
private:
	double cost;
	std::string type, color, purpose;

public:
	virtual std::string getData() override;
};

