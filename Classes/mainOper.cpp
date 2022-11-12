#include "..\\Classes\Flight.h"


int main() {

	

	
	bool exit = true;

	int press;
		
	Flight f;
	

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
	

	

	return 0;
}
