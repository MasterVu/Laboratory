#include "lab4.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	DB* database = new DB;
	database->DataIn();
	menu(database);
	system("pause");
	delete[] database->ptr;
	delete database;
}

Workers operator+ (const Workers& obj1, const Workers& obj2) {
	Workers temp;
	temp.SetFirstName(obj1.first_name + obj2.first_name);
	temp.SetSecondName(obj1.second_name + obj2.second_name);
	temp.SetYear(obj1.year + obj2.year);
	temp.SetSalary(obj1.salary + obj2.salary);
	return temp;
}

bool operator== (const Workers& obj1, const Workers& obj2) {
	if ((obj1.first_name == obj2.first_name) && (obj1.second_name == obj2.second_name) && (obj1.year == obj2.year) && (obj1.salary == obj2.salary))
		return true;
	else
		return false;
}

ostream& operator<< (ostream& out, const Workers& obj) {
	out << setw(11) << obj.first_name << setw(14) << obj.second_name << setw(10) << obj.year << setw(11) << obj.salary << endl;
	return out;
}

istream& operator>> (istream& in, Workers& obj) {
	in >> obj.first_name;
	in >> obj.second_name;
	in >> obj.year;
	in >> obj.salary;
	return in;
}

void menu(DB* database) {
	int ch;
	database->Show();
	cout << "\n\n1 - Create a copy of a line\n";
	cout << "2 - Add a line to another one\n";
	cout << "3 - Compare 2 lines\n";
	cout << "4 - Change a line (operator >> )\n";
	cout << "5 - Change a line (operator () )\n";
	cout << "6 - Get a symbol from name\n";
	cout << "7 - Sort\n";
	cout << "8 - Add a line\n";
	cout << "9 - Delete a line\n";
	cout << "10 - Exit\n";
	cin >> ch;
	if (ch == 1) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		database->ptr[x] = database->ptr[y];
	}
	else if (ch == 2) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		database->ptr[x] = database->ptr[x] + database->ptr[y];
	}
	else if (ch == 3) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		if (database->ptr[x] == database->ptr[y])
			cout << "line 1 == line 2\n";
		else
			cout << "line 1 != line 2\n";
	}
	else if (ch == 4) {
		int x;
		cout << "line: ";
		cin >> x;
		x--;
		cout << "Enter first name, second name, year, salary:\n";
		cin >> database->ptr[x];
	}
	else if (ch == 5) {
		int x;
		string first_name, second_name;
		int year, salary;
		cout << "\nline: ";
		cin >> x;
		x--;
		cout << "first name: ";
		cin >> first_name;
		cout << "second name: ";
		cin >> second_name;
		cout << "year: ";
		cin >> year;
		cout << "salary: ";
		cin >> salary;
		database->ptr[x](first_name, second_name, year, salary);
	}
	else if (ch == 6) {
		int x, y;
		cout << "line: ";
		cin >> x;
		x--;
		cout << "number of symbol in string: ";
		cin >> y;
		y--;
		cout << endl << database->ptr[x][y] << endl;
	}
	else if (ch == 7) {
		database->Sort();
	}
	else if (ch == 8) {
		cout << "\n\n";
		string first_name, second_name;
		int year, salary;
		cout << "first name: ";
		cin >> first_name;
		cout << "second name: ";
		cin >> second_name;
		cout << "year: ";
		cin >> year;
		cout << "salary: ";
		cin >> salary;
		database->Add(first_name, second_name, year, salary);
	}
	else if (ch == 9) {
		database->Delete();
	}
	else if (ch == 10) {
		return;
	}
	system("pause");
	menu(database);
}