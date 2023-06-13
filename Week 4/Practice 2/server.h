#include <iostream>
using namespace std;

class Server {
private:
	char* modelName;
	int serialNumber;
	int OSVersion;
	int lastMaintaneceDay;
	static int lastOSUpdateDay;
public:
	Server(char* name, int serial, int version, int lastday);
	void updateMaintanenceDay(int day);
	void updateSerialNumber(int serialNumber);
	int getOSUpdateDay();

	Server& updateMaintaneceDay(int day);
	Server& updateOSUpdateDay(int day);
};
