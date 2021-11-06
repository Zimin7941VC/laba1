#pragma once
#include "List.h"
#include "Shop.h"
#include <fstream>
#include <string>
class Keeper
{
private:
	List<Shop*> garages;

public:
	void print();					// вывод на экран производных объектов абстрактного класса Base
	void add(Shop* elem);	// добавление     производных объектов абстрактного класса Base
	void del(size_t num);			// удаление       производных объектов абстрактного класса Base
	bool save(std::string file);			// полное сохранение     себя в  файле
	bool load(std::string file);			// полное восстановление себя из файла
};

