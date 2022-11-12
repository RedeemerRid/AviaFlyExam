#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>

using namespace std;

class Flight {
	struct date {
		int day;
		int month;
		int year;
	};

	struct times {
		int hour;
		int min;
		int sec;
	};

	struct flight {
		string numFlight;
		string pointSrc;
		string pointDst;
		date dateFlight;
		times timeUp;
		times timeDown;
		string typeAirplane;
		double costTicket;
		int countSeats;
	};
	map<string, flight> allFlight;
   
public:
	Flight();	
	~Flight();
	
	void addFlight();
	void editFlight();
	void delFlight();
	void OutToFile();
	void print();
	
	void InToFlight();

	map<string, flight> get_flight();

	

};

