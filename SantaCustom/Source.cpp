

#include <iostream>
#include <map>
#include <conio.h>
#include <string>
#include <windows.h>
#include <ctime>

using namespace std;

//////////////////////////////////////////////////// À¿—— »√–Œ ¿////////////////////////



int ch()
{
	int ch = 0;
	int code = _getch();
	if (code == 0 || code == 224)
		code = _getch();

	switch (code) {
	case 72:
		ch = 1;
		break;
	case 80:
		ch = 2;
		break;
	case 77:
		ch = 3;
		break;
	case 75:
		ch = 4;
		break;
	}

	return ch;
}

void spawn()

{
	cout << "                                     / " << endl;
	cout << "                         \\/**\    // /"<< endl;
	cout << "                         /***-**\  /*/ " << endl;
	cout << "                        /* ***** *///- " << endl;
	cout << "           *\           / * ****** =  " << endl;
	cout << "               *** * ** ***/      \ -\ " << endl;
	cout << "                 **** *****/        \ \ " << endl;
	cout << "                    * * **/          \ " << endl;
	cout << "                     *****/            " << endl;
	cout << "                  /*** ***             " << endl;
	cout << "          *\ ***** * * * *              " << endl;
	cout << "          ****   * ****                 " << endl;
	cout << "                     **                " << endl;
	cout << "                     / **              " << endl;
	cout << "                     /  ** *           " << endl;
	cout << "                      \\                " << endl;
	cout << "                       \\              " << endl;
	
};

void ssani()
{
	cout << "                ----------             " << endl;
	cout << "              /                        " << endl;
	cout << "            /                          " << endl;
	cout << "          /                            " << endl;
	cout << "         /                            " << endl;
	cout << "        /                              " << endl;
	cout << "       / ------                        " << endl;
	cout << "       [] /\\                          " << endl;
	cout << "       [] | \\                        " << endl;
	cout << "       []  |  |                        " << endl;
	cout << "       [] |   |                         " << endl;
	cout << "       []  |-----                       " << endl;
	cout << "       [] |      |                     " << endl;
	cout << "         \\ ----- \\                   " << endl;
	cout << "          \\        /                " << endl;
	cout << "            -------/                   " << endl;
};


int main()
{
	int ol = 1;
	
	int c = 1;
	int A = 1;
	int color = 1;
	for (;;)
	{
		c = ch();
		std::system("cls");
	
		if (c == 1) {
			A++;
		}
		if (c == 2) {
			A--;
		}
		if (c == 3) {
			color++;
		}
		if (c == 4) {
			color--;
		}
		if (A < 1) {
			A = 1/*MAX SIZE*/;
		}

		if (A > 50)/*MAX SIZE*/ {
			A = 50;
		}


		
		if (color < 1) {
			color = 8/*MAX SIZE*/;
		}

		if (color > 8)/*MAX SIZE*/ {
			color = 1;
		}
		/*
		0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray*/


		for (int i = 0; i < A; i++)
		{
			spawn();
		}
	
		if (color==1)
		system("COLOR 1");
		
		if (color==2)
		system("COLOR 2");
		
		if (color==3)
		system("COLOR 3");
		
		if (color==4)
		system("COLOR 4");
		
		if (color==5)
		system("COLOR 5");
		
		if (color==6)
		system("COLOR 6");
		
		if (color==7)
		system("COLOR 7");
		
		if (color==8)
		system("COLOR 8");

		ssani();

	}





	system("pause");
}