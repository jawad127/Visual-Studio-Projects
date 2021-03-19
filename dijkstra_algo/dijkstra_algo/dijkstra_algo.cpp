

#include "pch.h"
#include <iostream>
#include <conio.h>
#include<string>
#include <iomanip>
using namespace std;

int sum(int, int);
int min(int, int);
void display(int a[8][8], char *[8]);
void floydalgo(int a[8][8]);
void header(char *[8]);
int route[8] = { 0 };
void main()
{
	char *name[8] = { "fsd","isd","khi","lhr","mtn","pwr","rwp","swl" };

	int city[8][8] = { {0,-1,4,-1,-1,-1,-1,-1},
					{-1,0,-1,-1,-1,-1,-1,-1},
					{-1,-1,0,-1,5,-1,-1,-1},
					{5,3,-1,0,-1,-1,-1,-1},
					{10,-1,-1,4,0,-1,-1,-1},
					{-1,8,-1,-1,4,0,-1,-1},
					{-1,-1,-1,-1,-1,2,0,-1},
					{2,-1,-1,-1,-1,-1,-1,0} };
	header(name);
	display(city, name);
	floydalgo(city);
	display(city, name);
	getch();
}
void header(char *ch[8])
{
	cout << "    ";
	for (int i = 0; i < 8; i++)
	{
		cout << setw(4) << ch[i];
	}
}
void floydalgo(int arr[8][8])
{
	for (int k = 0; k < 8; k++)
		for (int i = 0; i < 8; i++)
			for (int j = 0; j < 8; j++)
				arr[i][j] = min(arr[i][j], (sum(arr[i][k], arr[k][j])));

}
void display(int arr[8][8], char * ch[8])
{
	for (int a = 0; a < 8; a++)
	{
		cout << endl;
		cout << setw(4) << ch[a];
		for (int b = 0; b < 8; b++)
		{
			cout << setw(4) << arr[a][b];
		}
	}
	cout << endl;
}
int min(int x, int y)
{

	if (x == -1)return y;
	if (y == -1)return x;
	if (x < y)return x;
	return y;
}
int sum(int x, int y)
{

	if (x == -1)return x;
	if (y == -1)return y;
	return x + y;
}