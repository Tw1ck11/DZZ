#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

struct Phone
{
	string material;
	string name;
	string color;
	Date created;
	double weight;
	double height;
};

struct Laptop
{
	string material;
	string name;
	string color;
	Date created;
	double weight;
	double height;
};

struct IceCream
{
	string material;
	string flavor;
	string color;
	string height;
	string weight;
	Date created;
	bool itIsYummy;
};

struct Flat
{
	string ownerName;
	string country;
	string city;
	string street;
	int floor;
	int number;
	int rooms;
	Date leasing;
};

struct Pen
{
	string name;
	string color;
	double length;
	double weight;
	bool itIsHelium;
};

int main()
{
}
