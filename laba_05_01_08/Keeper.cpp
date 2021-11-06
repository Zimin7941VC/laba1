#include "Keeper.h"

Keeper::Keeper()
{
	std::cout << "Keeper()\n";
}

Keeper::~Keeper()
{
	std::cout << "~Keeper()\n";
}

void Keeper::print()
{
	for (size_t i = 0; i < shops.size(); i++)
		std::cout << "Книжный магазин №" << i + 1 << ":\n" << shops[i]->getPrintData();
}

void Keeper::add(Shop* elem)
{
	shops.push_back(elem);
}

void Keeper::del(size_t num)
{
	delete shops.pop(num);
}

bool Keeper::save(string file)
{
	std::ofstream fout(file);
	if (!fout) return 0;
	fout << to_string(shops.size()) << std::endl;
	for (size_t i = 0; i < shops.size(); ++i)
		fout << shops[i]->getData();

	fout.close();
	return 1;
}

bool Keeper::load(string file)
{
	std::ifstream fin(file);
	if (!fin) return 0;

	std::string type;
	size_t shop_amount;
	double cost;

	fin >> shop_amount;
	for (size_t i = 0; i < shop_amount; i++)
	{
		fin >> type;
		fin >> cost;
		if (type == "Book")
		{
			std::string title, author, annotation, genre;
			int year_of_issue, page_volume;
			getline(fin, title);
			getline(fin, author);
			getline(fin, annotation);
			getline(fin, genre);
			fin >> year_of_issue;
			fin >> page_volume;
			shops.push_back(new Book(cost, title, author, annotation, genre, year_of_issue, page_volume));
		}
		else if (type == "Textbook")
		{
			std::string title, author, institution;
			int year_of_issue, page_volume, year_of_study;
			getline(fin, title);
			getline(fin, author);
			getline(fin, institution);
			fin >> year_of_issue;
			fin >> page_volume;
			fin >> year_of_study;
			shops.push_back(new Textbook(cost, title, author, institution, year_of_issue, page_volume, year_of_study));
		}
		else if (type == "Stationery")
		{
			std::string type, color, purpose;
			getline(fin, type);
			getline(fin, color);
			getline(fin, purpose);
			shops.push_back(new Stationery(cost, type, color, purpose));
		}
	}
	return 1;
}

size_t Keeper::size()
{
	return shops.size();
}
