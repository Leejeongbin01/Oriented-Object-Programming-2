#include "server.h"

int main() {
	Server s1((char*)"server0", 0, 10, 1);
	Server s2((char*)"server1", 1, 10, 1);
	Server s3((char*)"server3", 2, 10, 1);

	s1.updateMaintanenceDay(3);
	s3.updateMaintanenceDay(5);
	s3.updateOSUpdateDay(5);
	cout << "The last day OS was updated is " << s1.getOSUpdateDay() << endl;
	return 0;
}
