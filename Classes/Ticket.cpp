#include "..\\Classes\Flight.h"
#include "..\\Classes\Ticket.h"
#include "..\\Classes\cities.h"

using namespace std;

void InToTicket() {
	map<string, flight> mmm;
	Flight fly;
	mmm = fly.get_flight();

	auto it = mmm.begin();
	for (it; it != mmm.end(); ++it)
		cout << it->first << "\t" << it->second.numFlight << endl;




}

void town() {
	set<string> city_name;
	city cccc;

	city_name = cccc.getCity();
	auto it = city_name.begin();
	for (it; it != city_name.end(); ++it)
		cout << *it << " ";
	cout << endl;
}