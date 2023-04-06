#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Brand {
private:
	int* ID;
	string BrandName;
	string ModelName;
public:
	Brand(int* id, string brand, string model)
		:BrandName(brand), ModelName(model) {
		ID = new int(*id);
	}
	Brand(const Brand& org)
		:BrandName(org.BrandName), ModelName(org.ModelName) {
		if (org.ID != nullptr) {
			ID = new int(*org.ID);
		}
	}
	~Brand() {
		if (ID != NULL) {
			delete []ID;
		}
	}
	void print() const {
		cout << *ID << endl;
		cout << BrandName << endl;
		cout << ModelName << endl;
	}
};

class Information {
private:
	int Year;
	int Kilometers;
	int* Price;
public:
	Information(int year, int kilo, int* price)
		:Year(year), Kilometers(kilo) {
		Price = new int(*price);
	}
	Information(const Information& org)
		:Year(org.Year), Kilometers(org.Kilometers) {
		if (org.Price != nullptr) {
			Price = new int(*org.Price);
		}
	}
	~Information() {
		if (Price != NULL) {
			delete []Price;
		}
	}
	void print() const {
		cout << Year << endl;
		cout << Kilometers << endl;
		cout << *Price << endl;
	}
};



class Car {
private:
	Brand* carBrand;
	Information* carInfo;
public:
	Car(int* id, string bn, string mn, int year, int kilo, int* price) {
		carBrand = new Brand(id, bn, mn);
		carInfo = new Information(year, kilo, price);
	}
	Car(const Car& org) {
		carBrand = new Brand(*org.carBrand);
		carInfo = new Information(*org.carInfo);
	}
	~Car() {
		if (carBrand != nullptr) {
			delete carBrand;
		}
		if (carInfo != nullptr) {
			delete carInfo;
		}
	}
	void print() const {
		carBrand->print();
		carInfo->print();
	}
};