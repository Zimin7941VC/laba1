#include <iostream>
#include <string>
#include <Windows.h>
#include "List.h"
#include "Keeper.h"
#include "Shop.h"
#include "Book.h"
#include "Textbook.h"
#include "Stationery.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Keeper kipper;
	int c;

	while (true)
	{
		cout << "\nМеню"
			<< "\n1.Восстановление из файла"
			<< "\n2.Добавить книжный магазин"
			<< "\n3.Вывод данных на экран"
			<< "\n4.Удалить книжный магазин"
			<< "\n5.Сохранение в файл"
			<< "\n0.Выход без сохранения\n->";
		cin >> c;

		switch (c)
		{
		case 1: {
			if (kipper.load("save.txt"))
				cout << "\tДанные успешно загружены\n";
			else
				cout << "\tФайл не найден или повреждён\n";
			break; }
		case 2: {
			int type;
			double cost;
			cout << "\tВыбирите книжный магазин:\n"
				<< "\n\t1.книга"
				<< "\n\t2.учебник"
				<< "\n\t3.канцелярия\n\t->";
			cin >> type;
			switch (type)
			{
			case 1: {
				std::string title, author, annotation, genre;
				int year_of_issue, page_volume;
				cout << "\tВведите название: ";
				getline(cin, title);
				getline(cin, title);
				cout << "\tВведите автор: ";
				getline(cin, author);
				cout << "\tВведите аннотация: ";
				getline(cin, annotation);
				cout << "\tВведите жанр: ";
				getline(cin, genre);
				cout << "\tВведите год выпуска: ";
				cin >> year_of_issue;
				cout << "\tВведите объем страниц: ";
				cin >> page_volume;
				cout << "\tВведите стоимость: ";
				cin >> cost;
				kipper.add(new Book(cost, title, author, annotation, genre, year_of_issue, page_volume));
				cout << "\tКнижный магазин №" << kipper.size() << " успешно добавлен\n";
				break; }
			case 2: {
				std::string title, author, institution;
				int year_of_issue, page_volume, year_of_study;
				cout << "\tВведите название: ";
				getline(cin, title);
				getline(cin, title);
				cout << "\tВведите автор: ";
				getline(cin, author);
				cout << "\tВведите учебное заведение: ";
				getline(cin, institution);
				cout << "\tВведите год выпуска: ";
				cin >> year_of_issue;
				cout << "\tВведите объем страниц: ";
				cin >> page_volume;
				cout << "\tВведите год обучения: ";
				cin >> year_of_study;
				cout << "\tВведите стоимость: ";
				cin >> cost;
				kipper.add(new Textbook(cost, title, author, institution, year_of_issue, page_volume, year_of_study));
				cout << "\tКнижный магазин №" << kipper.size() << " успешно добавлен\n";
				break; }
			case 3: {
				std::string type, color, purpose;
				cout << "\tВведите тип канцелярии: ";
				getline(cin, type);
				getline(cin, type);
				cout << "\tВведите цвет: ";
				getline(cin, color);
				cout << "\tВведите назначение: ";
				getline(cin, purpose);
				cout << "\tВведите стоимость: ";
				cin >> cost;
				kipper.add(new Stationery(cost, type, color, purpose));
				cout << "\tКнижный магазин №" << kipper.size() << " успешно добавлен\n";
				break; }
			default: cout << "\tВыбрано недопустимое значение!\n";
			}
			break; }
		case 3: {
			if (kipper.size() == 0)
				cout << "\tКнижный магазин отсутствует.\n";
			else
				kipper.print();
			break; }
		case 4: {
			if (kipper.size() == 0)
				cout << "\tКнижный магазин отсутствует.\n";
			else
			{
				size_t num;
				cout << "\tВыбирите Книжный магазин. Доступны: №"
					<< (kipper.size() == 1 ? "" : "1 - №")
					<< (kipper.size() == 1 ? 1 : kipper.size())
					<< "\n\t->";
				cin >> num;
				try
				{
					kipper.del(num - 1);
					cout << "\tДанные успешно удалены\n";
				}
				catch (int)
				{
					cout << "\tВыбрано недопустимое значение!\n";
				}
			}
			break; }
		case 5: {
			if (kipper.save("save.txt"))
				cout << "\tДанные успешно сохранены\n";
			else
				cout << "\tПри сохранении произошла ошибка\n";
			break; }
		case 0: {
			cout << "\t\t  Все несохраненные данные будут утеряны!"
				<< "\n\t\t  Продолжить?(1-Да / 0-Нет)\n\t\t->";
			cin >> c;
			if (c == 1) return 0; }
		}
	}
}

/*
Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
	▪ добавление и удаление производных объектов абстрактного класса Base;
	▪ полное сохранение себя в файле;
	▪ полное восстановление себя из файла.

Класс Книжный магазин хранит данные о Книга, Учебник, Канцелярия. 
Для книга:	название, автор, год выпуска, аннотация, жанр,	объем страниц,	стоимость. 
Для учебник:	название, автор, год выпуска,	учебное заведение, год обучения,	объем страниц,	стоимость. 
Для канцелярия:	тип канцелярии, цвет, назначение,	стоимость.
*/		