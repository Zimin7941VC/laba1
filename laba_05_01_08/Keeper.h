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
	void print();					// ����� �� ����� ����������� �������� ������������ ������ Base
	void add(Shop* elem);	// ����������     ����������� �������� ������������ ������ Base
	void del(size_t num);			// ��������       ����������� �������� ������������ ������ Base
	bool save(std::string file);			// ������ ����������     ���� �  �����
	bool load(std::string file);			// ������ �������������� ���� �� �����
	size_t size();
};

