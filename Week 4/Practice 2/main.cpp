#include "server2.h"

int main() {
	Server s1("server0", 0, 10, 1);
	Server s2("server1", 1, 10, 1);
	Server s3("server3", 2, 10, 1);

	s1.updateMaintaneceDay(3);
	s2.updateSerialNumber(4);
	s3.updateMaintaneceDay(3).updateOSUpdateDay(5);
	cout << "The last day OS was updated is " << s1.getOSUpdateDay() << endl;
	return 0;
}
