#include<iostream>

using namespace std;
int main() {
	int s;
	char a, b;
	bool r = false,t=false;
f:
	cout << "Choose symbol for player 1" << endl;

	cout << "Press 1 for X" << endl << "Press 2 for O" << endl;
	cin >> s;

	switch (s) {
	case 1:
		a = 'X';
		b = 'O';
		break;
	case 2:
		b = 'X';
		a = 'O';
		break;
	default:
		system("CLS");
		goto f;
	}
	system("CLS");
	string d = "         ";
	int x, y;
	for (int i = 2;; i++) {
		int p = (i % 2) + 1;
		
		cout << "Player " << p << " Turn: " << endl;
		

		cout << "  " << d[1] << "  | " << d[2] << "  | " << d[3] << "   " << endl;
		cout << "_____|____|_____" << endl;
		cout << "  " << d[4] << "  | " << d[5] << "  | " << d[6] << "   " << endl;
		cout << "_____|____|_____" << endl;
		cout << "  " << d[7] << "  | " << d[8] << "  | " << d[9] << "   " << endl;
		cout << "     |    |     " << endl;

		cout << endl << endl;
	g:
		cout << "Choose row: ";
		cin >> x;
		if (x < 1 || x>3) goto g;
	k:
		cout << "Choose column: ";
		cin >> y;
		if (y < 1 || y>3) goto k;


		int m = (x - 1) * 3 + y;
		
			if (d[m] == b||d[m]==a) {
				cout << "Already taken" << endl;
				
				goto g;
			}
		
		if (p == 1) {
			d[m] = a;
		} 
		if (p == 2) {
			d[m] = b;
		}

		if ((d[1] == d[2] && d[2] == d[3]&&d[1]==a) || (d[1] == d[4] && d[4] == d[7] && d[1] == a) ||
			(d[1] == d[5] && d[5] == d[9]&&d[1]==a && d[1] == a) ||(d[3] == d[6] && d[6] == d[9] && d[3] == a) ||
			(d[3] == d[5] && d[5] == d[7] && d[3] == a) || (d[7] == d[8] && d[8] == d[9] && d[7] == a||
				(d[4] == d[5] && d[5] == d[6] && d[4] == a)) ){
			
			r = true;
				
				break;
			}
		if ((d[1] == d[2] && d[2] == d[3] && d[1] == b) || (d[1] == d[4] && d[4] == d[7] && d[1] == b) ||
			(d[1] == d[5] && d[5] == d[9] && d[1] == b && d[1] == b) || (d[3] == d[6] && d[6] == d[9] && d[3] == b) ||
			(d[3] == d[5] && d[5] == d[7] && d[3] == b) || (d[7] == d[8] && d[8] == d[9] && d[7] == b)||
			(d[4] == d[5] && d[5] == d[6] && d[4] == b)) {

			t = true;
			break;
		}

		if ((d[1] == a || d[1] == b) && (d[2] == a || d[2] == b) &&
			(d[3] == a || d[3] == b) && (d[4] == a || d[4] == b) &&
			(d[5] == a || d[5] == b) && (d[6] == a || d[6] == b) &&
			(d[7] == a || d[7] == b) && (d[8] == a || d[8] == b) &&
			(d[9] == a || d[9] == b)) {
			break;
		}

		system("CLS");


	}
	system("CLS");
	if (r == true) {
		cout << "Player 1 won" << endl << endl;
	}
	else if (t == true) {
		cout << "Player 2 won" << endl << endl;
	}
	else cout << "Match Tied" << endl << endl;

	cout << "Game End" << endl;;
}


