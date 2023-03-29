#include "car.h"
#include <vector>


int main() {
	int input;
	vector<Car> record;
	do {
		cout << "1. Create a new record\n";
		cout << "2. Print all the records\n";
		cout << "3. Exit\n";
		cin >> input;

		if (input == 1) {
			int id;
			string bn, mn;

			cout << "ID : ";
			cin >> id;
			cout << "BrandName : ";
			cin >> bn;
			cout << "ModelName : ";
			cin >> mn;

			int year, kilo, price;

			cout << "Year : ";
			cin >> year;
			cout << "Kilometers : ";
			cin >> kilo;
			cout << "Price : ";
			cin >> price;

			Brand btmp(&id,bn,mn);
			Information itmp(year,kilo,&price);
			Car c(btmp, itmp);
	
			record.push_back(c);
			
		}
		else if (input == 2) {
			for (int i = 0; i < record.size(); i++) {
				record[i].print();
			}
		}
		else if (input == 3) {
			break;
		}
		else {
			cout << "1,2 or 3 select\n";
		}
	} while (true);
	
}
