#pragma once
#include <fstream>
#include <string>
#include "List.h"
#include "Shop.h"
#include "Book.h"
#include "Textbook.h"
#include "Stationery.h"
class Keeper
{
private:
	List<Shop*> shops;

public:
	Keeper();
	~Keeper();
	void print();					// вывод на экран производных объектов абстрактного класса Base
	void add(Shop* elem);	// добавление     производных объектов абстрактного класса Base
	void del(size_t num);			// удаление       производных объектов абстрактного класса Base
	bool save(std::string file);			// полное сохранение     себя в  файле
	bool load(std::string file);			// полное восстановление себя из файла
	size_t size();
};

