#include "Parent.h"

Brand::Brand(int* id, string brand, string model)
	:BrandName(brand), ModelName(model) {
	ID = new int;
	ID = id;
}
Brand::Brand() {}
	//:ID(NULL),BrandName(" "),ModelName(" "){}

Brand::Brand(const Brand& org) {
	ID = new int(*org.ID);
	BrandName = org.BrandName;
	ModelName = org.ModelName;
}
int Brand::getID() const{
	return *ID;
}
string Brand::getBrandName() const{
	return BrandName;
}
string Brand::getModelName() const{
	return ModelName;
}
void Brand::print() const{
	cout << getID() << endl;
	cout << getBrandName() << endl;	
	cout << getModelName() << endl;
}

void Brand::setID(int* id) {
	ID = id;
}
void Brand::setBrandName(string s) {
	BrandName = s;
}
void Brand::setModelName(string s) {
	ModelName = s;
}
//////////////////////////////////////////////////////

Information::Information(int year, int kilo, int* price)
	:Year(year), Kilometers(kilo) {
	Price = new int;
	Price = price;
}
Information::Information()
	/*:Year(1900),Kilometers(0),Price(NULL)*/{}

Information::Information(const Information& org) {
	Year = org.Year;
	Kilometers = org.Kilometers;
	Price = new int(*org.Price);
}
int Information::getYear() const{
	return Year;
}
int Information::getKilo() const{
	return Kilometers;
}
int Information::getPrice() const{
	return *Price;
}

void Information::print() const{
	cout << getYear() << endl;
	cout << getKilo() << endl;
	cout << getPrice() << endl;
}

void Information::setYear(int y) {
	Year = y;
}
void Information::setKilo(int k) {
	Kilometers = k;	
}
void Information::setPrice(int* pr) {
	Price = pr;
}