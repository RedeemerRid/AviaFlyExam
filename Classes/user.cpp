#include "..\\Classes\user.h"
#include "..\\Classes\Flight.h"
#include "..\\Classes\Ticket.h"
#include "..\\Classes\cities.h"

string login, password;
users::users() {
	InToFLightsUs();
	ifstream f(m_filename);
	while (!f.eof()) {
		f >> login;
		f >> password;
		m_users.insert(make_pair(login, password));
		//m_users[login] = password;
	}
	f.close();

}

users::~users() {
	saveuser_to_db(m_users);
	void savecity_to_db();
	void saveflight_to_db();
	void saveticket_to_db();
}

void users::adduser() {
	cout << "login: ";
	cin >> login;
	auto it = m_users.find(login);
	if (it == m_users.end()) {
		cin >> password;
		m_users[login] = password;
		cout << "password: ";
		saveuser_to_db(m_users);
	}
	else
		cout << "There is no such user";
}

void users::deluser() {
	cout << "login: ";
	cin >> login;

	auto it = m_users.find(login);
	if (it != m_users.end()) {
		m_users.erase(login);
		saveuser_to_db(m_users);
	}
	else
		cout << "There is no such user";
}

void users::edituser() {
	string oldlogin, newlogin, newpassw;
	cout << "login: ";
	cin >> oldlogin;
	auto it = m_users.find(oldlogin);
	if (it != m_users.end()) {
		cout << "Newlogin: ";
		cin >> newlogin;
		cout << "NewPassword: ";
		cin >> newpassw;
		m_users.erase(oldlogin);
		m_users.insert(make_pair(newlogin, newpassw));
		saveuser_to_db(m_users);
	}
	else
		cout << "There is no such user";
	
}

void users::viewuser() {
	for (auto it = m_users.begin(); it != m_users.end(); ++it)
		cout << it->first << " " << it->second << endl;
	system("pause");
}

void users::saveuser_to_db(map <string, string>) {
	ofstream f("db\\users.txt", ios::app);
	f << login << " " << password << endl;
	f.close();
}

void users::InToFLightsUs() {

	Flight fly;
	fly.print();
	//mmm = fly.get_flight();

}

//userinfo getuserinfo(string login);