#include "Shop.h"

Shop::Shop(double cost) : cost(cost)
{
	std::cout << "Shop(cost)\n";
}

Shop::~Shop()
{
	std::cout << "~Shop()\n";
}
