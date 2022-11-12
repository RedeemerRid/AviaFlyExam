#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <set>



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

	void InToTicket(); 

	void town(); 

};