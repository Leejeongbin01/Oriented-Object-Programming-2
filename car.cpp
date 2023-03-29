#include "car.h"

Car::Car(Brand &b, Information &i)
	:carBrand(b), carInfo(i) {
	cout << "Car ����\n";
}
\
Car::Car(const Car& org) {
	carBrand = org.carBrand;
	carInfo = org.carInfo;
	print();
}

void Car::print() const{
	carBrand.print();
	carInfo.print();
}