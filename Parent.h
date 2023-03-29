#include <iostream>
#include <string>
using namespace std;

class Brand {
private:
	int* ID;
	string BrandName;
	string ModelName;
public:
	Brand();
	Brand(int* id, string brand, string model);
	Brand(const Brand& org);
	int getID() const;
	string getBrandName()const;
	string getModelName() const;
	void print() const;

	void setID(int *id);
	void setBrandName(string s);
	void setModelName(string s);
};

class Information {
private:
	int Year;
	int Kilometers;
	int* Price;
public:
	Information();
	Information(int year, int kilo, int* price);
	Information(const Information& org);
	int getYear() const;
	int getKilo() const;
	int getPrice() const;
	void print() const;

	void setYear(int y);
	void setKilo(int k);
	void setPrice(int *pr);
};
