#include <cstdlib>
#include <iostream>
#include <time.h>
#include<string>
using namespace std;
int main() {
	int p1, p2, x = 0, y = 0;
	bool f1 = false, f2 = false,g=true,h=false;
	srand(time(0));

	string a = "    ______  ______     ___     ______  ______     _ ";
	cout << "Game : Ludo" << endl;
	cout << "It is a 2-player game." << endl;
	cout << "You have to reach exactly at the end." << endl;
	cout << "Press Enter to roll the dice." << endl;
	cout << "If you step on your oppponent, he will go back to the starting point." << endl;
	cout << "Press Enter to start the game...";
	cin.ignore();
	system("CLS");

	for (int i = 2; ; i++) {

		g = true;

		int p = (i % 2) + 1;
		
		
		
		p1 = 1 + (rand() % 6);
		if (p1 == 6) {
			
			
			p2 = 1 + (rand() % 6);

		}
		cout << "Player " << p << " Turn: " << endl << "Roll..." << endl;;
		a = "    ______  ______     ___     ______  ______     _ ";
		a[x] = '1';
		a[y] = '2';

		cout << "              ________         " << endl;
		cout << "             | " << a[49] << " _" << a[50] << "  " << a[51] << "| End" << endl;
		cout << "             | " << a[48] << "|  | " << a[0] << "| " << endl;
		cout << "             | " << a[47] << "|  | " << a[1] << "| " << endl;
		cout << "             | " << a[46] << "|  | " << a[2] << "| " << endl;
		cout << "             | " << a[45] << "|  | " << a[3] << "| " << endl;
		cout << " ____________|_" << a[44] << "|  |_" << a[4] << "|____________ " << endl;
		cout << "|" << a[38] << " " << a[39] << "_" << a[40] << "_" << a[41] << "_" << a[42] << "_" << a[43] << "_|        |_" << a[5] << "_" << a[6] << "_" << a[7] << "_" << a[8] << "_" << a[9] << " " << a[10] << "|" << endl;
		cout << "|" << a[37] << "|__________          __________|" << a[11] << "| " << endl;
		cout << "|" << a[36] << "_" << a[35] << "_" << a[34] << "_" << a[33] << "_" << a[32] << "_" << a[31] << "_|___  ___|_" << a[17] << "_" << a[16] << "_" << a[15] << "_" << a[14] << "_" << a[13] << "_" << a[12] << "| " << endl;
		cout << "             |" << a[30] << " |  | " << a[18] << "|        " << endl;
		cout << "             |" << a[29] << " |  | " << a[19] << "|        " << endl;
		cout << "             |" << a[28] << " |  | " << a[20] << "|        " << endl;
		cout << "             |" << a[27] << " |  | " << a[21] << "|        " << endl;
		cout << "             |" << a[26] << " |__| " << a[22] << "|        " << endl;
		cout << "             |" << a[25] << "___" << a[24] << "__" << a[23] << "|        " << endl;
		cin.ignore();
		cout << "Player " << p << " Turn: " << endl;
		system("CLS");

		if (p1 == 6) {
			cout << "You rolled a " << p1 << " and " << p2 << endl;
		}
		else cout << "You rolled a " << p1 << endl;
		

		if (p == 1) {
			if (f1 == false) {
				if (p1 == 6) {
					x = p2;
					f1 = true;
					g = false;

				}
				else cout << "You did not roll a six" << endl;
			}
		}
		if (p == 2) {
			if (f2 == false) {
				if (p1 == 6) {
					y = p2;
					f2 = true;
					g = false;

				}
				else cout << "You did not roll a six" << endl;
			}
		}

		if (g == true && f1 == true && p == 1) {

			if (p1 == 6) {
				
				x = x + p1 + p2;
			}
			else {
				
				x = x + p1;
			}

		}
		if (g == true && f2 == true && p == 2) {

			if (p1 == 6) {
				
				y = y + p1 + p2;
			}
			else {
				
				y = y + p1;
			}
		}
		if (p == 1 && x > 52) {
			if (p1 == 6) {
				x = x - p1 - p2;
			}
			else x = x - p1;

			cout << "You rolled a bigger number" << endl;
		}
		if (p == 2 && y > 52) {
			if (p1 == 6) {
				y = y - p1 - p2;
			}
			else y = y - p1;

			cout << "You rolled a bigger number" << endl;
		}
		if (x == 52) {
			system("CLS");
			cout << "Player 1 won" << endl;
			h = true;
			
		}
		if (y == 52) {
			system("CLS");
			cout << "Player 2 won" << endl;
			h = true;
			
		}
		if (f1 == true && f2 == true && p == 1 && x == y) {
			y = 0;
			f2 = false;


		}
		if (f1 == true && f2 == true && p == 2 && x == y) {
			x = 0;
			f1 = false;
		}
		
		 a = "    ______  ______     ___     ______  ______     _ ";
		a[x] = '1';
		a[y] = '2';

		cout << "              ________         " << endl;
		cout << "             | " << a[49] << " _" << a[50] << "  " << a[51] << "| End" << endl;
		cout << "             | " << a[48] << "|  | " << a[0] << "| " << endl;
		cout << "             | " << a[47] << "|  | " << a[1] << "| " << endl;
		cout << "             | " << a[46] << "|  | " << a[2] << "| " << endl;
		cout << "             | " << a[45] << "|  | " << a[3] << "| " << endl;
		cout << " ____________|_" << a[44] << "|  |_" << a[4] << "|____________ " << endl;
		cout << "|" << a[38] << " " << a[39] << "_" << a[40] << "_" << a[41] << "_" << a[42] << "_" << a[43] << "_|        |_" << a[5] << "_" << a[6] << "_" << a[7] << "_" << a[8] << "_" << a[9] << " " << a[10] << "|" << endl;
		cout << "|" << a[37] << "|__________          __________|" << a[11] << "| " << endl;
		cout << "|" << a[36] << "_" << a[35] << "_" << a[34] << "_" << a[33] << "_" << a[32] << "_" << a[31] << "_|___  ___|_" << a[17] << "_" << a[16] << "_" << a[15] << "_" << a[14] << "_" << a[13] << "_" << a[12] << "| " << endl;
		cout << "             |" << a[30] << " |  | " << a[18] << "|        " << endl;
		cout << "             |" << a[29] << " |  | " << a[19] << "|        " << endl;
		cout << "             |" << a[28] << " |  | " << a[20] << "|        " << endl;
		cout << "             |" << a[27] << " |  | " << a[21] << "|        " << endl;
		cout << "             |" << a[26] << " |__| " << a[22] << "|        " << endl;
		cout << "             |" << a[25] << "___" << a[24] << "__" << a[23] << "|        " << endl;
		cin.ignore();
		
		system("CLS");

		if (h == true) {
			cout << "Game End" << endl;
			break;
		}
	}return 0;
}
