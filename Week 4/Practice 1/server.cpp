#include "server.h"

int Server::lastOSUpdateDay = 0;

Server::Server(char* name, int serial, int version, int lastday)
	:modelName(name), serialNumber(serial), OSVersion(version), lastMaintaneceDay(lastday) {

}

void Server::updateMaintanenceDay(int day) {
	lastMaintaneceDay = day;
}

int Server::getOSUpdateDay() {
	return lastOSUpdateDay;
}

void Server::updateOSUpdateDay (int day) {
	lastOSUpdateDay = day;
}
