#include<locale>
#include"product.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	product products[10];
	products[0].setProduct("pen", "maxriter", 150, 2019, 20);
	products[1].setProduct("eraser", "maxriter", 220, 2025, 50);
	products[2].setProduct("pencil", "mote", 40, 2044, 140);
	products[3].setProduct("pen", "cello", 100, 2022, 80);
	products[4].setProduct("pencil", "lyra", 50, 2050, 30);
	products[5].setProduct("pen", "parker", 1000, 2030, 45);
	products[6].setProduct("pen", "stabilo", 500, 2025, 150);
	products[7].setProduct("eraser", "cello", 150, 2080, 90);
	products[8].setProduct("pencil", "stabilo", 250, 2063, 250);
	products[9].setProduct("pen", "bic", 80, 2021, 65);

	string str;
	int priceOrYear, count = 0;
	short a;

	cout << "1.введите название наименования, для того, чтобы узнать информацию о нем:" << endl
		<< "(pencil,pen,eraser): ";
	cin >> str;

	cout << "\nнаименование\tпроизодитель\tцена\tсрок годности\tкол-во\n";
	for (int i = 0; i < 10; i++)
	{
		if (products[i].getName() == str)
		{
			products[i].show();
			count++;
		}
	}
	if (count == 0)
		cout << "\nтаких товаров нет\n";

	cout << "\n\nхотите перейти ко второму заданию?1/0?";
	cin >> a;

	system("cls");

	switch (a)
	{
	case 1:
	{
		cout << "2.введите название наименования, для того, чтобы узнать информацию о нем:" << endl
			<< "(pencil,pen,eraser): ";
		cin >> str;

		cout << "введите цену товара, чтобы посмотреть какие товары не привышают данную сумму\n: ";
		cin >> priceOrYear;
		count = 0;

		cout << "\nнаименование\tпроизодитель\tцена\tсрок годности\t\tкол-во\n";
		for (int i = 0; i < 10; i++)
		{
			if (products[i].getName() == str)
			{
				if (products[i].getPrice() < priceOrYear)
				{
					products[i].show();
					count++;
				}
			}

		}
		if (count == 0)
			cout << "\nтаких товаров нет\n";
	}break;
	case 0:
	{
		exit(1);
	}break;
	}

	cout << "\n\nхотите перейти ко третьему заданию?1/0?";
	cin >> a;

	system("cls");

	switch (a)
	{
	case 1:
	{
		count = 0;
		cout << "3. задайте год для того, чтобы узнать у каких товаров срок хранения больше \nзаданного: ";
		cin >> priceOrYear;
		
		cout << "\nнаименование\tпроизодитель\tцена\tсрок годности\t\tкол-во\n";
		for (int i = 0; i < 10; i++)
		{
			if (products[i].getShelfLife() > priceOrYear)
			{
				products[i].show();
				count++;
			}

		}
		if(count ==0) cout << "\nтаких товаров нет\n";


	}break;
	case 0:
	{
		exit(1);
	}break;
	}

	system("pause");
}


