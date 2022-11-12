#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>

#include "..\\Classes\Ticket.h"

using namespace std;


struct passanger {
	int numTicket;
	string fio;
	string birthday;
	string numOfFlight;
};

class Ticket {
	
	map<int, passanger> mtPassanger;
public:
	Ticket() {}
	~Ticket(){}

	void InToTicket() {
		Flight fly;
		//fly.get_flight();
		//fly.InToFlight();

		fly.print();
		
		
		
		
	}

	

};