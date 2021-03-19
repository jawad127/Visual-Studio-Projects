// car_rental.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


#include <iostream>
#include<string>
#include <conio.h>
using namespace std;

class car_rental {

private:
	bool check1=false ,check2=false;
	string fname,lname;
	int car_no;
	char select;
	char pass[7];
	char email[50];
	char femail[10] = { 'j','a','w','a','d' };
	char fpass[7] = { 'p','a','s','s','1','2','3' };
	int a=0;
	int carno, idno;
public :
	
	void login() {
		
		
		cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
		cout << "\t\t\t\t\t------------------------------";
		cout << "\n\t\t\t\t\t\t     LOGIN \n";
		cout << "\t\t\t\t\t------------------------------\n\n";
		cout << "\t\t\t\t\tEnter Password: ";
			
		cin.get(email, 50);
			for(int i=0;email[i]!='\0';i++){
				if (email[i] == femail[i]) {
					check1 = true;
				}
				if (email[i] != femail[i]) {
					check1 = false;
				}
		}

			for (int j = 0; j <= 7; j++) {
				
				pass[j] = _getch();
				cout << "*";
				if (pass[j] == fpass[j]) {
					check2 = true;
				}
				else {
					cout << "please try again !!" << endl;
					check2 = false;
					login();
				}
			}
			if ((check1 == true) && (check2 = true)) {
				system("cls");
				cout << "you have loged in successfully !";
				getinfo();
			}
	}

	void getinfo() {
		getline(cin,fname);
		fname.append(" ");
		getline(cin, lname);
		fname.append(lname);
		cin >> carno;
		cin >> idno;

	}

};
int main() {
	
	
	car_rental object;
	object.login();
}