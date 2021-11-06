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
	void print();					// ����� �� ����� ����������� �������� ������������ ������ Base
	void add(Shop* elem);	// ����������     ����������� �������� ������������ ������ Base
	void del(size_t num);			// ��������       ����������� �������� ������������ ������ Base
	bool save(std::string file);			// ������ ����������     ���� �  �����
	bool load(std::string file);			// ������ �������������� ���� �� �����
};

