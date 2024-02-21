#include "Admin.h"
#include <iostream>
#include <string>
using namespace std;


Admin::Admin() {

	//default admin login info.
	ID = "admin";
	Password = "admin";

	marks = P = A = 0;
	courseName = stuID = " ";
	grade = '-';
}

bool Admin::Login() {
	
	string id, pass;

	while (1) {
		system("cls");
		cout << " --------------------------------------- " << endl;
		cout << "               ADMIN LOGIN               " << endl;
		cout << " --------------------------------------- " << endl << endl;
		cout << "    ID           :"; cin >> id;
		cout << "    PASSWORD     :"; cin >> pass;
		cout << " --------------------------------------- " << endl;

		if (id != ID || pass != Password) {
			cout << endl << "Try Again!" << endl;
			return 0;
			system("pause");
		}
		else {
			cout << endl << "Login Success!" << endl;
			system("pause");
			return 1;
			break;
		}
	}
}

int Admin::Menu() {

	int choice;

	system("cls");
	cout << "------------------------------------" << endl;
	cout << "            ADMIN MENU              " << endl;
	cout << "------------------------------------" << endl << endl;
	cout << "                               Press" << endl << endl;
	cout << " Add Student                     (1)" << endl;
	cout << " View All Students               (2)" << endl;
	cout << " Edit Student Details            (3)" << endl;
	cout << " Add Teacher                     (4)" << endl;
	cout << " View All Teachers               (5)" << endl;
	cout << " Edit Teacher Details            (6)" << endl;
	cout << " Exit                            (7)" << endl;
	cout << "------------------------------------" << endl;
	cout << "Enter your choice: "; 
	cin >> choice;
	while (!(choice > 0 && choice < 8)) {
		cout << "Invalid Choice!  Please Enter Again: ";
		cin >> choice;
	}
	return choice;
}

Admin::~Admin() {}