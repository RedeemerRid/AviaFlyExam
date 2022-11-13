#pragma once
#include <map>
#include <set>
#include <iostream>
#include <fstream>
using namespace std;
class city {
	set<string> name_city;
	
public:
	city();
	void addCity();
	void editCity();
	void delCity();
	void save();
	void inToFileC();
	set<string> getCity();
	~city();
};