#include <iostream>
using namespace std;


char arr[9]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };


void printBoard()
{
	cout << "      |" << "      |" << endl;
	cout << arr[0] << "     |" << arr[1] << "     |" << arr[2] << endl;
	cout << "------|" << "------" << "|" << "-----" << endl;
	cout << arr[3] << "     |" << arr[4] << "     |" << arr[5] << endl;
	cout << "------|" << "------" << "|""-----" << endl;
	cout << arr[6] << "     |" << arr[7] << "     |" << arr[8] << endl;
	cout << "      |" << "      |" << endl;

}

inline void printEnterGame()
{
	cout << "Welcome TicTacToe Game)" << endl;
}

char checkWin();


bool checkBox(int n);


bool checkInput(char check);


int main() {
	printEnterGame();
	int count = 0;
	while (true)
	{
		printBoard();
		char b;
		char check = ' ';
		b = checkWin();
		if (b == 'X')
		{
			cout << "X won" << endl;
			break;
		}
		else if (b == 'O')
		{
			cout << "O won" << endl;
			break;
		}
		else
		{
			if (count == 9)
			{
				cout << "draw" << endl;
				break;
			}
		}

		int x;
		if (count % 2 == 0)
		{
			cout << "player 1 'X':";
			cin >> x;
		}
		else
		{
			cout << "player 2 'O':";
			cin >> x;
		}
		while (checkBox(x - 1) == false)
		{
			cout << "This box is not empty" << endl;
			cout << "please enter again:";
			cin >> x;
		}
		//char check = ' ';
		if (count % 2 == 0)
		{
			check = 'X';
		}
		else
		{
			check = 'O';
		}
		arr[x - 1] = check;
		count++;

	}

}




char checkWin()
{
	if (arr[0] == arr[1]&& arr[1] == arr[2])
	{
		return arr[0];
	}
	else if (arr[3] == arr[4]&& arr[4] == arr[5])
	{
		return arr[3];
	}
	else if (arr[6] == arr[7]&& arr[7] == arr[8])
	{
		return arr[6];
	}
	else if (arr[0] == arr[4]&& arr[4] == arr[8])
	{
		return arr[0];
	}
	else if (arr[2] == arr[4]&& arr[4] == arr[6])
	{
		return arr[2];
	}
	else if (arr[0] == arr[3] && arr[3]== arr[6])
	{
		return arr[0];
	}
	else if (arr[1] == arr[4]&& arr[4] == arr[7])
	{
		return arr[1];
	}
	else if (arr[2] == arr[5]&& arr[5] == arr[8])
	{
		return arr[2];
	}
	return ' ';
}



bool checkBox(int n)
{
	if (n >= 0 && n <= 8)
	{
		if (arr[n] == ' ')
		{
			return true;
		}
	}
	return false;
}


bool checkInput(char check)
{
	if (check == 'O' || check == 'X')
	{
		return true;
	}
	return false;
}