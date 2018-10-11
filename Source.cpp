#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int PlayerX = 0;
int PlayerY = 0;

string map[3][3] = 
{
	{"\t|_ROOM_|", "\t|_ROOM_|", "\t|_ROOM_|"},
    {"\t|_ROOM_|", "\t|_ROOM_|", "\t|_ROOM_|"},
	{"\t|_ROOM_|", "\t|_ROOM_|", "\t|_ROOM_|"}	

};

void drawMap() {
	system("cls");
	cout << "\n\nUse WASD to move and Q to Quit\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}


}
int main() {
	cout << "\nThis is the map\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
	cout << "\n" << endl;
	system("pause");
	

	map[PlayerY][PlayerX] = { "\t|PLAYER|" };
	system("cls");
	cout << "\n\nThis is where you are\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}

	cout << "\n" << endl;
	system("pause");
	
	char ch = 0;
	cout << "Press Q to quit\n";
	do
	{
		/*cin >> ch*/;
		ch = _getch();
		switch (ch)
		{
		case 'w':
			map[PlayerY][PlayerX] = { "\t|_ROOM_|" };
			if (PlayerY > 0) {
				PlayerY = PlayerY - 1;
			}
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 'a':
			map[PlayerY][PlayerX] = { "\t|_ROOM_|" };
			if (PlayerX > 0) {
				PlayerX = PlayerX - 1;
			}
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 's':
			map[PlayerY][PlayerX] = { "\t|_ROOM_|" };
			if (PlayerY < 2) {
				PlayerY = PlayerY + 1;
			}
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
			case 'd':
			map[PlayerY][PlayerX] = { "\t|_ROOM_|" };
			if (PlayerX < 2) {
				PlayerX = PlayerX + 1;
			}
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;

		}

	} while (ch != 'Q' && ch != 'q');

	return 0;
}