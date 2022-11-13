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
	/*
	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		cout << it->first << "\t" << it->second.numFlight << endl;
	*/



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


void Ticket::listUpFlight() {
	string gorod;
	town();
	cout << "vvedite gorod kuf hotite : " << endl;
	cin >> gorod;
	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		if (gorod == it->second.pointSrc)
			
			cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
			<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.year << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.day << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
			<< endl << "\t" << (it->second).timeDown.hour << " : " << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
			<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;


	
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
