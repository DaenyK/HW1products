#ifndef _PRODUCT_H_
#define _PRODUCT_H_
#include <string>
#include <iostream>


using namespace std;

class	product
{
private:
	string name;
	string manufacturer;
	int price;
	
	/*class date {
	private:
		int year;
		int month;
		int day;

	public:
		date()
		{
			year = 0;
			month = 0; 
			day = 0;
		}
		date(int year, int month,  int day)
		{
			this->year = year;
			this->month = month;
			this->day = day;
		}
		
		void setDate(const int &year, const int &month, const int &day)
		{
			this->year = year;
			this->month = month;
			this->day = day;
		}
		void setYear(const int &year)
		{
			this->year = year;
		}
		void setMonth(const int &month)
		{
			this->month = month;
		}
		void setDay(const int &day)
		{
			this->day = day;
		}

		int getYear()
		{
			return year;
		}
		int getMonth()
		{
			return month;
		}
		int getDay()
		{
			return day;
		}

	}shelfLife;*/
	int shelfLife;
	int numberOfProducts;

public:
	product()
	{
		name = "";
		manufacturer = "";
		price = 0;
		shelfLife = 0;
		numberOfProducts = 0;
	}
	product(string name, string manufacturer, int price,int shelfLife, int numberOfProucts)
	{
		this->name = name;
		this->manufacturer = manufacturer;
		this->price = price;
		this->shelfLife = shelfLife;
		this->numberOfProducts = numberOfProucts;
	}
	

	void setProduct(const string &name, const string & manufacturer, const int& price,const int&shelfLife, const int& numberOfProucts)
	{
		this->name = name;
		this->manufacturer = manufacturer;
		this->price = price;
		this->shelfLife = shelfLife;
		this -> numberOfProducts = numberOfProucts;
	}
	void setName(const string name)
	{
		this->name = name;
	}
	void setManufacturer(const string &manufacturer)
	{
		this->manufacturer = manufacturer;
	}
	void setPrice(const int &price)
	{
		this->price = price;
	}
	void setShelfLife(const int &shelLife)
	{
		this->shelfLife = shelLife;
	}
	void setNumberOfProducts(const int &numberOfProducts)
	{
		this->numberOfProducts = numberOfProducts;
	}

	string getName()
	{
		return name;
	}
	string getManufacturer()
	{
		return manufacturer;
	}
	int getPrice () 
	{
		return price;
	}
	int getShelfLife()
	{
		return shelfLife;
	}
	int getNumberOfProducts()
	{
		return numberOfProducts;
	}

	void show()
	{
		cout << name << "\t\t" << manufacturer << "\t\t" << price << " עד.\t\t" << shelfLife << " ד.\t\t" << numberOfProducts << "רע.\n";
	}
};

#endif