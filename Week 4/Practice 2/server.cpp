#include "server2.h"

int Server::lastOSUpdateDay = 0;

Server::Server(char* name, int serial, int version, int lastday)
	:modelName(name), serialNumber(serial), OSVersion(version), lastMaintaneceDay(lastday) {

}

void Server::updateMaintanenceDay(int day) {
	lastMaintaneceDay = day;
}

void Server::updateSerialNumber(int serialNumber) {
	this->serialNumber = serialNumber;
}

int Server::getOSUpdateDay() {
	return lastOSUpdateDay;
}

Server& Server::updateMaintaneceDay(int day) {
	lastMaintaneceDay = day;
	return *this;
}

Server& Server::updateOSUpdateDay(int day) {
	lastOSUpdateDay = day;
	return *this;
}
