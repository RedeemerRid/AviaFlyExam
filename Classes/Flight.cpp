#include "..\\Classes\Flight.h"




template <class T>
void getValue(string prompt, T& value)
{
	cout << prompt;
	cin >> value;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		
		cout << "Error... try again" << endl;
		cout << prompt;
		
		cin >> value;

	}
	string endLine;
	getline(cin, endLine);
	
}

template <>
void getValue<string>(string prompt, string& value)
{
	cout << prompt;
	getline(cin, value);
	if(value.empty())
		getline(cin, value);
	
	
		
}


Flight::Flight() {
	InToFlight();
}
Flight::~Flight() {
	OutToFile();
}

void Flight::addFlight() {
	//auto it = allFlight.begin();
	flight f;
	
	
	bool flag = false;
	do {
		//flag = false;
		getValue("enter number of Flight : ", f.numFlight);
		if (allFlight.count(f.numFlight)) {
			flag = true;
		}
	} while (flag);
	getValue("enter Point of Source : ", f.pointSrc);
	getValue("enter Point of Distination : ", f.pointDst);
	getValue("enter Date of Flightn : ", f.dateFlight.year);
	getValue("enter Date of Flightn : ", f.dateFlight.month);
	getValue("enter Date of Flightn : ", f.dateFlight.day);
	getValue("enter Time of Up : ", f.timeUp.hour);
	getValue("enter Time of Up : ", f.timeUp.min);
	getValue("enter Time of Up : ", f.timeUp.sec);
	getValue("enter Time of Down : ", f.timeDown.hour);
	getValue("enter Time of Down : ", f.timeDown.min);
	getValue("enter Time of Down : ", f.timeDown.sec);
	getValue("enter Type of Airplane : ", f.typeAirplane);
	getValue("enter Cost of Ticket : ", f.costTicket);
	getValue("enter Count of Seats : ", f.countSeats);

	allFlight[f.numFlight] = f;
}

void Flight::editFlight() {
	if (!allFlight.empty()) {
		Flight::print();
		cout << endl;

		flight f1;
		string edit_flight, exit;
		
		cout << "if you changed your mind, if you don't want to change anything, enter - exit" << endl;
		cout << "choose number of Flight which edit and other : " << endl;

		bool flag = 0;
		do {
			getValue("enter number of Flight : ", exit);
			for (auto it = allFlight.begin(); it != allFlight.end(); ++it)
				if (exit == it->first) {
					edit_flight = exit;
					flag = 1;
				}
				else
					cout << "error try again " << endl;
		} while (!flag);

		getValue("if you do not edit flight - enter '0'-zero or enter, \nif you edit flight - enter new flight  : ", f1.numFlight);
		if (f1.numFlight == "0" || (f1.numFlight).empty()) {
			f1.numFlight = allFlight[edit_flight].numFlight;
		}

		getValue("if you do not edit pointSrc - enter '0' - or enter, \nif you edit pointSrc - enter new pointSrc  : ", f1.pointSrc);
		if (f1.pointSrc == "0" || (f1.pointSrc).empty()) {
			f1.pointSrc = allFlight[edit_flight].pointSrc;
		}
		getValue("if you do not edit pointDst - enter 'no', \nif you edit pointDst - enter new pointDst  : ", f1.pointDst);
		if (f1.pointDst == "0" || (f1.pointDst).empty()) {
			f1.pointDst = allFlight[edit_flight].pointDst;
		}
		getValue("if you do not edit dateFlight - enter 'no', \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.year);
		if (f1.dateFlight.year == 0) {
			f1.dateFlight.year = allFlight[edit_flight].dateFlight.year;
		}
		getValue("if you do not edit dateFlight - enter 'no', \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.month);
		if (f1.dateFlight.month == 0) {
			f1.dateFlight.month = allFlight[edit_flight].dateFlight.month;
		}
		getValue("if you do not edit dateFlight - enter 'no', \nif you edit dateFlight - enter new dateFlight  : ", f1.dateFlight.day);
		if (f1.dateFlight.day == 0) {
			f1.dateFlight.day = allFlight[edit_flight].dateFlight.day;
		}
		getValue("if you do not edit timeUp - enter 'no', \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.hour);
		if (f1.timeUp.hour == 0) {
			f1.timeUp.hour = allFlight[edit_flight].timeUp.hour;
		}
		getValue("if you do not edit timeUp - enter 'no', \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.min);
		if (f1.timeUp.min == 0) {
			f1.timeUp.min = allFlight[edit_flight].timeUp.min;
		}
		getValue("if you do not edit timeUp - enter 'no', \nif you edit timeUp - enter new timeUp  : ", f1.timeUp.sec);
		if (f1.timeUp.sec == 0) {
			f1.timeUp.sec = allFlight[edit_flight].timeUp.sec;
		}
		getValue("if you do not edit timeDown - enter 'no', \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.hour);
		if (f1.timeDown.hour == 0) {
			f1.timeDown.hour = allFlight[edit_flight].timeDown.hour;
		}
		getValue("if you do not edit timeDown - enter 'no', \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.min);
		if (f1.timeDown.min == 0) {
			f1.timeDown.min = allFlight[edit_flight].timeDown.min;
		}
		getValue("if you do not edit timeDown - enter 'no', \nif you edit timeDown - enter new timeDown  : ", f1.timeDown.sec);
		if (f1.timeDown.sec == 0) {
			f1.timeDown.sec = allFlight[edit_flight].timeDown.sec;
		}
		getValue("if you do not edit typeAirplane - enter 'no', \nif you edit typeAirplane - enter new typeAirplane  : ", f1.typeAirplane);
		if (f1.typeAirplane == "0" || (f1.typeAirplane).empty()) {
			f1.typeAirplane = allFlight[edit_flight].typeAirplane;
		}
		getValue("if you do not edit costTicket - enter 'no', \nif you edit costTicket - enter new costTicket  : ", f1.costTicket);
		if (f1.costTicket == 0) {
			f1.costTicket = allFlight[edit_flight].costTicket;
		}
		getValue("if you do not edit countSeats - enter 'no', \nif you edit countSeats - enter new countSeats  : ", f1.countSeats);
		if (f1.countSeats == 0) {
			f1.countSeats = allFlight[edit_flight].countSeats;
		}
		//allFlight.erase(allFlight.find(edit_flight));
		allFlight.erase(edit_flight);
		allFlight[f1.numFlight] = f1;

		cout << endl;
	}
	else {
		cout << "empty" << endl;
	}
}


void Flight::delFlight() {

	string del_flight;
	Flight::print();
	getValue("select Flight what you want delete : ", del_flight);
	allFlight.erase(del_flight);

}

void Flight::print() {
	for (auto it = allFlight.begin(); it != allFlight.end(); ++it) {
		cout << it->first << "\t" << (it->second).numFlight << endl << "\t" << (it->second).pointSrc
			<< endl << "\t" << (it->second).pointDst << endl << "\t" << (it->second).dateFlight.year << " : " << (it->second).dateFlight.month << " : " << (it->second).dateFlight.day << endl << "\t" << (it->second).timeUp.hour << " : " << (it->second).timeUp.min << " : " << (it->second).timeUp.sec
			<< endl << "\t" << (it->second).timeDown.hour << " : "  << (it->second).timeDown.min << " : " << (it->second).timeDown.sec << endl << "\t" << (it->second).typeAirplane
			<< endl << "\t" << (it->second).costTicket << endl << "\t" << (it->second).countSeats << endl;
	}
}

void Flight::OutToFile() {
	ofstream ft("1.txt");
	if (!allFlight.empty()) {
		for (auto it = allFlight.begin(); it != allFlight.end(); ++it) {
			ft << it->first << endl;
			ft << (it->second).numFlight << endl;
			ft << (it->second).pointSrc << endl;
			ft << (it->second).pointDst << endl;
			ft << (it->second).dateFlight.year << endl;
			ft << (it->second).dateFlight.month << endl;
			ft << (it->second).dateFlight.day << endl;
			ft << (it->second).timeUp.hour << endl;
			ft << (it->second).timeUp.min << endl;
			ft << (it->second).timeUp.sec << endl;
			ft << (it->second).timeDown.hour << endl;
			ft << (it->second).timeDown.min << endl;
			ft << (it->second).timeDown.sec << endl;
			ft << (it->second).typeAirplane << endl;
			ft << (it->second).costTicket << endl;
			ft << (it->second).countSeats << endl;
		}
	}
	else
		cout << "empty" << endl;
	ft.close();
}

void Flight::InToFlight() {
	flight* f;
	ifstream ft("1.txt");

	if (ft) {
		while (!ft.eof()) {
			f = new flight;
			flight* ff;
			string x;
			ft >> x;
			if (!x.empty()) {

				ft >> f->numFlight;
				ft >> f->pointSrc;
				ft >> f->pointDst;
				ft >> f->dateFlight.year;
				ft >> f->dateFlight.month;
				ft >> f->dateFlight.day;
				ft >> f->timeUp.hour;
				ft >> f->timeUp.min;
				ft >> f->timeUp.sec;
				ft >> f->timeDown.hour;
				ft >> f->timeDown.min;
				ft >> f->timeDown.sec;
				ft >> f->typeAirplane;
				ft >> f->costTicket;
				ft >> f->countSeats;
				ff = f;
				allFlight[ff->numFlight] = *ff;
			}
		}
	}
	else
		cout << "empty" << endl;
	ft.close();
}