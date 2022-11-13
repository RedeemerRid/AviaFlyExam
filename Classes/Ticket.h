#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include <set>



using namespace std;


struct passanger {
	string fio;
	string birthday;
	string numOfFlight;
};

class Ticket {
	set<string> city_name;
	map<string, flight> mmm;
	map<string, passanger> mtPassanger;
public:
	Ticket();
	~Ticket();

	void InToTicket(); 

	void town(); 
	string listUpFlight();
	string listDownFlight();
	void print();
	void listUpDownFlight();

	void saveToPROG() {
		ifstream in("..\\db\\ticket.txt");
		if (in) {
			while(!in.eof()){
				string x;
				passanger* pasman;
				passanger* ppss;
				pasman = new passanger;
			
				in >> pasman->numOfFlight;
				x = pasman->numOfFlight;
				in >> pasman->fio;
				in >> pasman->birthday;

				ppss = pasman;
				mtPassanger[x] = *ppss;

			}
		}
		else
			cout << "emptyOut" << endl;
		in.close();
	}

	map<string, passanger> getMtPas() {
		return mtPassanger;
	}
};