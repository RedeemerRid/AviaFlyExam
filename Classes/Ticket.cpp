#include "..\\Classes\Flight.h"
#include "..\\Classes\Ticket.h"
#include "..\\Classes\cities.h"

using namespace std;

Ticket::Ticket() {
	InToTicket();
}
Ticket::~Ticket() { }

void Ticket::InToTicket() {
	Flight fly;
	mmm = fly.get_flight();
	
}


void Ticket::print() {
	
}

void Ticket::town() {
	
	city cccc;

	city_name = cccc.getCity();
	auto it = city_name.begin();
	for (it; it != city_name.end(); ++it)
		cout << *it << " : ";
	cout << endl;
}

string listDownFlight();
string Ticket::listUpFlight() {
	bool flag = 0;
	string gorodUp;
	town();
	cout << "vvedite gorod otkud vzlet hotite : " << endl;
	cin >> gorodUp;
	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		if (gorodUp == it->second.pointSrc) {
			flag = 1;
			cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
				<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.year << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.day << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
				<< endl << "\t" << (it->second).timeDown.hour << " : " << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
				<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;
		}
	if (flag) {
		string gorodDown = listDownFlight();
		
	}
	listDownFlight();



	return gorodUp;
}

string Ticket::listDownFlight() {
	string gorodDown;
	town();
	cout << "vvedite gorod kuda posadka hotite : " << endl;
	cin >> gorodDown;
	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		if (gorodDown == it->second.pointSrc)

			cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
			<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.year << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.day << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
			<< endl << "\t" << (it->second).timeDown.hour << " : " << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
			<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;


	return gorodDown;
}


void Ticket::listUpDownFlight() {
	string gorodUp, gorodDown;
	town();
	cout << "vvedite gorod  otkuda  hotite : " << endl;
	cin >> gorodUp;
	cout << "vvedite gorod  kuda  hotite : " << endl;
	cin >> gorodDown;

	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		if (gorodUp == it->second.pointSrc && gorodDown == it->second.pointDst)

			cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
			<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.year << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.day << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
			<< endl << "\t" << (it->second).timeDown.hour << " : " << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
			<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;



}
