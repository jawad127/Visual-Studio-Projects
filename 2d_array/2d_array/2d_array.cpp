
#include "pch.h"
#include<iostream>
#include<string>
#include <windows.h>




using namespace std;

struct Vehicle
{

	int Vehicle_no;
	char Vehicle_name[20];
	char Vehicle_type[20];
	char petrol_type[20];
	int petrol_box;
	int fuel_price;

	Vehicle *next;

	

};
int check=0;
class petrol
{
private:
	int store;
	Vehicle *front, *rear;
public:

	petrol()

	{
		store = NULL;
		front = NULL;
		rear = NULL;
	}

	void add_rear(int c, char cn[], char ct[])

	{

		Vehicle * ptr = new Vehicle;
		ptr->Vehicle_no = c;
		strcpy_s(ptr->Vehicle_name, cn);
		strcpy_s(ptr->Vehicle_type, ct);
		
		++check;
		if (front == NULL)

		{
			front = ptr;
			rear = ptr;
		}
		else

		{
			rear->next = ptr;
			ptr->next = NULL;
				
			rear = ptr;

		}
	}

	void remove_Vehicle_front()
	{
		if (front->next = NULL)
		{

			cout << " ----No Vehicle in the petrol pump in right Now:)----";
		}

		else
		{
			--check;
			choose();

			Vehicle* ptr = front;
			front = front->next;
			delete ptr;
			cout << " \t\t ----Vehicle has passed  successfully---- " << endl;

		}

	}

	int  count_vehicals()
	{

		Vehicle*ptr = front;
		int count=0;

		while (ptr != NULL)
		{

			count++;
			ptr = ptr->next;

		}
		return count;
	}


	Vehicle *getfront()
	{
		if (front == NULL)
		{
			return NULL;
		}
		else
		{

			return front;
		}
	}

	bool check_vehical()
	{
		if (front == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int show_total_earning() {
		return store;
	}
	void allPre_record()
	{

		if (front == NULL)
		{
			cout << "---------Yet No Vehical came in the petrol pump for petrol--------- " << endl;
		}
		else
		{
			cout << "\t\t ------------Vehicle Record :) -------------- " << endl;
			cout << "\t\t ======================================== " << endl;

			Vehicle* ptr = front;
			while (ptr != NULL)
			{
				cout << "\t   Vehicle-no-plate : " << ptr->Vehicle_no << endl;
				cout << "\t   Vehicle- Name : " << ptr->Vehicle_name << endl;
				cout << "\t   Vehicle type :" << ptr->Vehicle_type;
				


				ptr = ptr->next;
			}

			Sleep(5000);
		}

	}

	void choose() {
		system("CLS");
		int choice;
		int amount;
		double petrol = 130.05;
		double diesel = 140.05;
		double oil = 100.05;
		cout << "\n\t        ===== Welcome to the Petrol Pump =====" << endl;
		cout << "\n\n\t\t**************************************" << endl;
		cout << "\t\t*  Type         *     Price          *" << endl;
		cout << "\t\t**************************************" << endl;
		cout << "\t\t*               *                    *" << endl;
		cout << "\t\t*  Petrol       *  Rs. 130.05 /Ltr    *" << endl;
		cout << "\t\t*  Kerosene Oil *  Rs. 100.05 /Ltr    *" << endl;
		cout << "\t\t*  Diesel       *  Rs. 140.05 /Ltr    *" << endl;
		cout << "\t\t*               *                    *" << endl;
		cout << "\t\t*               *                    *" << endl;
		cout << "\t\t**************************************" << endl;
		cout << "\n\n                Select from the following options : " << endl;
		
		cout << "\n\n            press 1 for Petrol" << endl;
		cout << "                press 2 for Diesel" << endl;
		cout << "                press 3 for Kerosene Oil" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << " Petrol is  130.05 rupees per litter " << endl;
			cout << "Enter Amount : ";
			cin >> amount;
			store = store + amount;
			cout << "Petrol purchased in litters  :  " << amount / petrol << endl;
			cout << "\n\n\t\t\t Thank You for using our service" << endl;
			Sleep(3000);
			break;

		case 2:
			cout << " Diesel is  140.05 rupees per litter " << endl;
			cout << "Enter Amount : ";
			cin >> amount;
			store = store + amount;
			
			cout << "Diesel purchased in litters  :  " << amount / diesel << endl;
			cout << "\n\n\t\t\t Thank You for using our service" << endl;
			Sleep(3000);
			break;

		case 3:
			cout << " Kerosene Oil is  100.05 rupees per litter " << endl;
			cout << "Enter Amount : ";
			cin >> amount;
			store = store + amount;
			cout << "Kerosene Oil purchased in litters  :  " << amount / oil << endl;
			cout << "\n\n\t\t\t Thank You for using our service" << endl;
			Sleep(3000);
			break;

		}

	}

};
void menu()
{
	char ch=1;
	petrol p;
	
	for(;ch!=8;)
	{
		system("CLS");
		cout << "\t\t         ----------------------------------------------------------------------" << endl << endl;
		cout << "\t\t         -----  Submitted to Mr Saqib Majeed sahib--> <3 THE BEST <3-----------" << endl << endl;
		cout << "\t\t         ----------------------------------------------------------------------" << endl << endl;
		cout << "\t\t                Wellcome To Petrol Pump Recording System" << endl << endl;
		cout << "\t\t        -----------------------------------------------------------------------" << endl;

		cout << "\t\t         ! 1 Add Vehicle." << endl;
		cout << "\t\t         ! 2 REMOVE Vehicle." << endl;
		cout << "\t\t         ! 3 No. of Recorded Vehicles" << endl;
		cout << "\t\t         ! 4 Vehicle in the petrol Pump. " << endl;
		cout << "\t\t         ! 5 Check whether Vehicle or no Vehicles in the pump." << endl;
		cout << "\t\t         ! 6 ALL Vehicles record With Details  " << endl;
		cout << "\t\t         ! 7 Total Earning " << endl;
		cout << "\t\t         ! Exit " << endl;
		cout << "\t\t        -----------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "\t\t\t Please Enter the Choice :    ";
		cin >> ch;

		if (ch == '1')
		{
			int Vn;
			char VN[20];
			char Vt[20];

			
			cout << "\n\n\t               Enter Vehicle number  :  ";
			cin >> Vn;
			cout << "\n\t               Enter Vehicle Name  :  ";
			cin >> VN;
			cout << "\n\t               Enter Vehile Type  :  ";
			cin >> Vt;

			
			p.add_rear(Vn, VN, Vt);
		}

		else if (ch == '2')
		{
			try {
				if (check == 0) {
					throw 9;
				}
				p.remove_Vehicle_front();
				cout << " \t\t  Remote vehicle from the pertrol successfully  ";
			}
			catch (int x) {
				system("cls");
				cout << "\n\n\n\t\t\tThere is no Vehicle at the fuel station*" << endl;
				Sleep(2000);
				menu();
			}
		}

		else if (ch == '3')
		{
			int R = p.count_vehicals();
			if (R == 0)
			{
				cout << "\t\t Fuel Record of the whole day, how many entered and going out from the pump";
				Sleep(3000);
			}
			else
			{
				cout << "\t\t     No of vehicales came in and no going out " << p.count_vehicals() << endl;
				Sleep(3000);

			}

		}

		else if (ch == '4')
		{
			Vehicle *s = p.getfront();
			if (s == NULL)
			{
				cout << "no vehical in the petrol pump " << endl;
				Sleep(3000);
			}
			else
			{
				cout << "\t\t         Vehicle_NO_PLATE : " << s->Vehicle_no << endl;
				cout << "\t\t         Vehicle_NAME     : " << s->Vehicle_name << endl;
				cout << "\t\t         Vehicle Type    : " << s->Vehicle_type << endl;
				cout << "\t\t         petrol box" << s->petrol_box << endl;
				Sleep(3000);
			}
		}
		else if (ch == '5')
		{
			if (!p.check_vehical())
			{
				cout << "\t\t         the is soee vehical in the pump" << endl;
			}
			else
			{
				cout << "\t\t         no vehical in the pump" << endl;
			}
		}
		else if (ch == '6')
		{
			system("CLS");
			p.allPre_record();
		}
		else if (ch == '7')
		{
			int show_store = p.show_total_earning();
			cout << "\n\n\t\t\t\tTotal earning so far :  " <<show_store<< endl;
			Sleep(3000);
		}




	}
}

int main()

{
	Sleep(1000);
	cout << "\n\n\n\n\t\t        ...........Submitted To :-  Sir Saqib Majeed sahb............. " << endl;
	cout << endl;

	Sleep(1000);
	cout << "\n\n\t\t\t\t\t ==== Submitted by ====" << endl;
	cout<<"\n\n\t......M Rehan (18-arid-3036)......Jawad Ahmad (18-arid-3020)......Ali Raza (18-Arid-3004)...... " << endl; 
	
	Sleep(1000);
	cout << "\n\n\n\t\t            **** Project Title  :   Petrol Pump Recording system ****  " << endl;
	cout << endl;
	Sleep(1000);
	cout << "\n\n\n\t\t\t ____________A.O.A To Respected Sir & Dear Fellows____________    ";
	cout << endl;
	cout << endl;
	Sleep(1);
	char ch;
	cout << "\n\n\t\t\t             .........Press I to start.........     " << endl;
	cin >> ch;


	if (ch == 'i')

	{
		menu();
	}
	else
	{
		cout << "You have entered invalid the Key instead of i ";
	}

}