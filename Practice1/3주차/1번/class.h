#include <iostream>
using namespace std;

class P1 {
private:
	int* ptr;
	int a, b, c;
public:
	P1()
		:a(1), b(2), c(3) {
		ptr = new int[3];
		cout << "I am a default constructor\n";
	}
	P1(int x, int y, int z)
		:a(x), b(y), c(z) {
		cout << "I am a paramerter constructor\n";
	}
	P1(const P1& org) {
		a = org.a;
		b = org.b;
		c = org.c;
		cout << "I am a copy constructor\n";
	}
	~P1() {
		delete[]ptr;
		cout << "I am a destructor\n";
	}
	void print() {
		cout << a << " " << b << " " << c << endl;
	}
};
