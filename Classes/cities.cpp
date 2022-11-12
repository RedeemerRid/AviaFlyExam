#include "..\\Classes\Flight.h"
#include "..\\Classes\Ticket.h"
#include "..\\Classes\cities.h"
using namespace std;

city::city() {
	inToFileC();
}
void city::addCity() {
	string temp;
	cout << "Enter city: ";
	cin >> temp;
	name_city.insert(temp);
	save();
}
void city::editCity() {
	string temp, new_city;
	cout << "Enter city for change: ";
	cin >> temp;
	auto it = name_city.find(temp);
	if (it != name_city.end()) {
		name_city.erase(temp);
		cout << "Enter new City: ";
		cin >> new_city;
		name_city.insert(new_city);
		save();
	}
	else cout << "City is not found" << endl;
}
void city::delCity() {
	string temp;
	cout << "Enter city for del: ";
	cin >> temp;
	auto it = name_city.find(temp);
	if (it != name_city.end()) {
		name_city.erase(temp);
		save();
	}
	else cout << "City is not found" << endl;
}

void city::inToFileC() {
	ifstream is(file_name);
	string temp_name;
	if (is) {
		while (!is.eof()) {
			is >> temp_name;
			name_city.insert(temp_name);
		}
	}
	else
		cout << "emptyCitiIn" << endl;
}

void city::save() {
	ofstream os("..\\db\\cities.txt");
	if (os) {
		for (auto it = name_city.begin(); it != name_city.end(); ++it) {
			os << *it;
		}
	}
	else
		cout << "emptyCitiOUT" << endl;
}

set<string> city::getCity() {
	return name_city;
}
city::~city() {
	save();
}