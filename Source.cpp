#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	int p1, p2, xx = 0, yy = 0;
    bool f1 = false, f2 = false;
	srand(time(0));
	
	cout << "Game: Ludo" << endl << endl << "Press Enter to roll dice" << endl;
	cout << "First to reach exactly 52 wins" << endl <<"You need a six to start the count"<<endl
		<< "Press Enter to start...";
	cin.ignore();

	for (int i = 2; ; i++) {

		int p = (i % 2) + 1;
		cout << endl << endl << "Player " << p << " Turn:";
		cout << endl << "Roll dice... " << endl;
		cin.ignore();
		p1 = 1 + (rand() % 6);
		if (p1 == 6) {
			cout << "You rolled a 6. Roll again...";
			cin.ignore();
			p2 = 1 + (rand() % 6);

		}
		if (p == 1) {
			if (f1 == false) {
				if (p1 == 6) {
					xx = p2;
					f1 = true;
					cout << "You rolled " << p2 << endl;
					cout << "Player 1 is at " << xx << endl;

				}
				else cout << "You did not get a six." << endl;
				continue;
			}
		}
		if (p == 2) {
			if (f2 == false) {
				if (p1 == 6) {
					yy = p2;
					f2 = true;
					cout << "You rolled " << p2 << endl;
					cout << "Player 2 is at " << yy << endl;

				}
				else cout << "You did not get a six." << endl;
				continue;
			}
		}

		if (f1 == true && p == 1) {

			if (p1 == 6) {
				cout << "You rolled " << p2 << endl;
				xx = xx + p1 + p2;
			}
			else {
				cout << "You rolled " << p1 << endl;
				xx = xx + p1;
			}

		}
		if (f2 == true && p == 2) {

			if (p1 == 6) {
				cout << "You rolled " << p2 << endl;
				yy = yy + p1 + p2;
			}
			else {
				cout << "You rolled " << p1 << endl;
				yy = yy + p1;
			}
		}
		if (p == 1 && xx > 52) {
			if (p1 == 6) {
				xx = xx - p1 - p2;
			}
			else xx = xx - p1;

			cout << "You rolled a bigger number" << endl;
			cout << "Player " << p << " is at " << xx << endl;
			continue;
		}
		if (p == 2 && yy > 52) {
			if (p1 == 6) {
				yy = yy - p1 - p2;
			}
			else yy = yy - p1;

			cout << "You rolled a bigger number" << endl;
			cout << "Player " << p << " is at " << yy << endl;
			continue;
		}
		if (xx == 52) {
			cout << "Player 1 won" << endl;
			break;
		}
		if (yy == 52) {
			cout << "Player 2 won" << endl;
			break;
		}

		if (p == 1) {
			cout << "Player " << p << " is at " << xx << endl;
		}
		if (p == 2) {
			cout << "Player " << p << " is at " << yy << endl;
		}
	}return 0;
}
