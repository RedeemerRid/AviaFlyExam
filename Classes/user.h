#pragma once
#include <map>
#include <string>
#include <fstream>
#include <iostream>


//#include "..\\classes\cities.h"
using namespace std;

class users
{
	map<string, flight> mmm;
	map<string, string> m_users;
	const string m_filename = "db\\users.txt";
public:
	users();
	void adduser();
	void deluser();
	void edituser();
	void viewuser();
	void saveuser_to_db(map <string, string>);
	void addCity();
	void delcity();
	void editcity();
	void viewcity();
	void savecity_to_db();
	void addflight();
	void delflight();
	void editflight();
	void viewflight();
	void saveflight_to_db();
	void addticket();
	void delticket();
	void editticket();
	void viewticket();
	void saveticket_to_db();
	void InToFLightsUs();
	~users();
};