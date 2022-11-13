
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <algorithm>
#include "..\\Classes\Flight.h"
#include "..\\Classes\Ticket.h"
#include "..\\Classes\cities.h"
#include "..\\Classes\user.h"


using namespace std;

int main() {
	Flight f;

	
	if (f.get_users_m().empty()) {
		cout << "empty Flight" << endl;
	}
	else {
		bool flg = 0;
		int y = 3;
		string login;
		do {
			cout << "yot have : " << y << "  popitki " << endl;
			cout << "enter your login : ";

			cin >> login;
			cout << endl;
			auto it = f.get_users_m().find(login);
			if (it != f.get_users_m().end()) {
				string password;
				int x = 3;
				do {
					cout << "yot have : " << x << "  popitki " << endl;
					cout << " enter your password : ";
					cin >> password;
					cout << endl;
					if (it->second == password) {
						flg = 1;
					}
					else {
						cout << "error password ... try again " << endl;
						password = "";
						x--;
					}
				} while (x);
			}
			else {
				cout << " error login ... try again " << endl;
				login = "";
				y--;
			}
		} while (y);



		bool exit = true;

		int press;




		do

		{
			cout << "select  0  -  exit : " << endl;
			cout << "select  1  -  add to flight : " << endl;
			cout << "select  2  -  eddit to flight : " << endl;
			cout << "select  3  -  delete to flight : " << endl;
			cout << "select  4  -  viuwer to list passager in flight : " << endl;


			while (!isdigit(char(cin.peek())))

			{

				system("cls");

				cin.ignore();

				cout << "select  0  -  exit : " << endl;
				cout << "select  1  -  add to flight : " << endl;
				cout << "select  2  -  eddit to flight : " << endl;
				cout << "select  3  -  delete to flight : " << endl;
				cout << "select  4  -  viuwer to list passager in flight : " << endl;

			}

			cin >> press;
			switch (press) {
			case 0:
				cout << "if you want to exit? -- press -- 0, if you continue = press -- 1 : ";;
				cin >> exit;
				break;
			case 1:

				f.addFlight();
				break;
			case 2:
				f.editFlight();
				break;
			case 3:
				f.delFlight();
				break;
			case 4:
				cout << "viuwer" << endl;
				break;
				//default:
					//break;
			}
		} while (exit != 0);


		f.print();


	}
	
	return 0;
}
