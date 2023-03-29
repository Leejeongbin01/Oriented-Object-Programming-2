#include "Parent.h"

class Car:public Brand,public Information {
private:
	Brand carBrand;
	Information carInfo;
public:
	Car(Brand &b, Information &i);
	Car(const Car& org);
	void setCarBrand(Brand b) {
		carBrand = b;
	}
	void setCarInfo(Information i) {
		carInfo = i;
	}
	void print() const;
};