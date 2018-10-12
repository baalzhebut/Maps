#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int PlayerX = 0;
int PlayerY = 0;

string map[3][3] = 
{
	{"\t|ROOM 1|", "\t|ROOM 2|", "\t|ROOM 3|"},
    {"\t|ROOM 4|", "\t|ROOM 5|", "\t|ROOM 6|"},
	{"\t|ROOM 6|", "\t|ROOM 8|", "\t|ROOM 9|"}	

};
string currentRoom = "\t|ROOM 1|";
void drawMap() {
	system("cls");
	cout << "\nMAP\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}

	cout << "\nUse WASD to move and Q to Quit\n" << endl;
}
int main() {
	cout << "\nThis is the map\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}
	cout << "\n" << endl;
	system("pause");
	

	map[PlayerY][PlayerX] = { "\t|PLAYER|" };
	system("cls");
	cout << "\nThis is where you are\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}

	cout << "\n" << endl;
	cout << "\nUse WASD to move and Q to Quit\n" << endl;
	//system("pause");
	
	char ch = 0;
	//cout << "Press Q to quit\n";
	do
	{
		/*cin >> ch*/;
		ch = _getch();
		switch (ch)
		{
		case 'w':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerY > 0) {
				PlayerY = PlayerY - 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 'a':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerX > 0) {
				PlayerX = PlayerX - 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 's':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerY < 2) {
				PlayerY = PlayerY + 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
			case 'd':
				map[PlayerY][PlayerX] = currentRoom;
			if (PlayerX < 2) {
				PlayerX = PlayerX + 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;

		}

	} while (ch != 'Q' && ch != 'q');

	return 0;
}