#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Brand {
protected:
	int* ID=new int;
	string BrandName;
	string ModelName;
public:
	Brand() {}
	Brand(int* id, string brandname, string modelname) :
		ID(id), BrandName(brandname), ModelName(modelname) {
	}
	Brand(const Brand& copy):BrandName(copy.BrandName), ModelName(copy.ModelName) {
		ID = new int;
		*ID = *(copy.ID);
	}
	void print() {
		cout<<"ID ="<<setw(6) <<*ID << " BrandName ="<<setw(3) << 
			BrandName<<" ModelName =" << setw(4) << ModelName  << "\n";
	}
	void destory() {
		delete ID;
	}
};

class Information {
protected:
	int* Price=new int;
	int Year=0;
	int Kilometers=0;
public:
	Information() {}
	Information(int* price, int year, int kilo) :
		Price(price), Year(year), Kilometers(kilo) {

	}
	Information(const Information& copy) :Year(copy.Year), Kilometers(copy.Kilometers) {
		Price = new int;
		*Price = *(copy.Price);
	}
	void print() {
		cout <<"Price =" << setw(3) << *Price << " Year ="<< setw(8) <<
			Year <<" Kilometers ="<< setw(3) << Kilometers << "\n";
	}
	void destory() {
		delete Price;
	}
};

class Car : public Brand, Information {
private:
	Brand b;
	Information i;
public:
	Car(Brand& br, Information& inf) : b(br), i(inf) {

	}
	Car(const Car& copy) : b(copy.b), i(copy.i) {
		print();
	}
	void print() {
		b.print();
		i.print();
		cout << "\n";
	}
	void destory() {
		b.destory();
		i.destory();
	}
};
