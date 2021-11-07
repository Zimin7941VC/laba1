#include "Stationery.h"

Stationery::Stationery(double cost, std::string type, std::string color, std::string purpose) :
    Shop(cost), type(type), color(color), purpose(purpose) {
    std::cout << "Stationery(cost, type, color, purpose)\n";
}

Stationery::~Stationery()
{
    std::cout << "~Stationery()\n";
}

std::string Stationery::getData()
{
	return "Textbook\n" +
		std::to_string(cost) + "\n" +
		type + "\n" +
		color + "\n" +
		purpose + "\n";
}

std::string Stationery::getPrintData()
{
	return " анцел€ри€: \n\tтип канцел€рии: " + type +
		"\n\tцвет: " + color +
		"\n\tназначение: " + purpose +
		"\n\tстоимость: " + std::to_string(cost) + "\n";
}
