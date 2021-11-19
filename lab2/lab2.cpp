#include "lab2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	Substance* substance = new Substance[N];
	DataIn(substance);
	menu(substance);
	system("pause");
	delete[] substance;
}

void DataIn(Substance* arr) {
	ifstream in;
	in.open("in.txt");
	for (int i = 0; i < N; i++)
		if (in.is_open())
			in >> arr[i];
	in.close();
}

void Show(Substance* arr) {
	for (int i = 0; i < N; i++)
		cout << arr[i];
}

void ShowHeader() {
	system("cls");
	cout << "Temperature of substance\n";
	cout << "--------------------------------\n";
	cout << " Substance | Type | Temperature \n";
	cout << "--------------------------------\n";
}

Substance operator+ (const Substance& obj1, const Substance& obj2) {
	Substance temp;
	temp.SetSubs(obj1.subs + obj2.subs);
	temp.SetType(obj1.type);
	temp.SetT_min(obj1.t_min + obj2.t_min);
	temp.SetT_max(obj1.t_max + obj2.t_max);
	return temp;
}

bool operator== (const Substance& obj1, const Substance& obj2) {
	if ((obj1.subs == obj2.subs) && (obj1.type == obj2.type) && (obj1.t_min == obj2.t_min) && (obj1.t_max == obj2.t_max))
		return true;
	else
		return false;
}

ostream& operator<< (ostream& out, const Substance& obj) {
	out << setw(9) << obj.subs << setw(7) << obj.type << setw(10) << obj.t_min << "-" << obj.t_max << endl;
	return out;
}

istream& operator>> (istream& in, Substance& obj) {
	in >> obj.subs;
	in >> obj.type;
	in >> obj.t_min;
	in >> obj.t_max;
	return in;
}

void menu(Substance* substance) {
	int ch;
	system("cls");
	ShowHeader();
	Show(substance);
	cout << "\n\n1 - Create a copy of a line (operator = )\n";
	cout << "2 - Add a line to another one (operator + )\n";
	cout << "3 - Compare 2 lines (operator == )\n";
	cout << "4 - Change a line (operator >> )\n";
	cout << "5 - Change a line (operator () )\n";
	cout << "6 - Get a symbol from substance (operator [] )\n";
	cout << "7 - Exit\n";
	cin >> ch;
	if (ch == 1) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		substance[x] = substance[y];
	}
	else if (ch == 2) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		substance[x] = substance[x] + substance[y];
	}
	else if (ch == 3) {
		int x, y;
		cout << "line 1: ";
		cin >> x;
		cout << "line 2: ";
		cin >> y;
		x--;
		y--;
		if (substance[x] == substance[y])
			cout << "line 1 == line 2\n";
		else
			cout << "line 1 != line 2\n";
	}
	else if (ch == 4) {
		int x;
		cout << "line: ";
		cin >> x;
		x--;
		cout << "Enter substance, type, t_min, t_max:\n";
		cin >> substance[x];
	}
	else if (ch == 5) {
		int x;
		string subs;
		char type;
		double t_min, t_max;
		cout << "\nline: ";
		cin >> x;
		x--;
		cout << "substance: ";
		cin >> subs;
		cout << "type: ";
		cin >> type;
		cout << "t_min: ";
		cin >> t_min;
		cout << "t_max: ";
		cin >> t_max;
		substance[x](subs, type, t_min, t_max);
	}
	else if (ch == 6) {
		int x, y;
		cout << "line: ";
		cin >> x;
		x--;
		cout << "number of symbol in string: ";
		cin >> y;
		y--;
		cout << endl << substance[x][y] << endl;
	}
	else if (ch == 7)
		return;
	system("pause");
	menu(substance);
}