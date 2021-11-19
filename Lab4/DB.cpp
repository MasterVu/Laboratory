#include "lab4.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

DB::DB() {
	n = 5;
	ptr = new Workers[n];
	sorted = false;
}

void DB::DataIn() {
	ifstream in;
	in.open("in.txt");
	for (int i = 0; i < n; i++)
		if (in.is_open())
			in >> ptr[i];
	in.close();
}

void DB::Show() {
	system("cls");
	cout << "Workers of company\n";
	cout << "------------------------------------------------\n";
	cout << " First name | Second name | first_name | Salary \n";
	cout << "------------------------------------------------\n";
	for (int i = 0; i < n; i++)
		cout << ptr[i];
}

void DB::Sort() {
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (ptr[j].first_name > ptr[j + 1].first_name) {
				swap(ptr[j], ptr[j + 1]);
			}
	sorted = true;
}

void DB::Add(string first_name, string second_name, int year, int salary) {
	Workers* temp = new Workers[n + 1];
	for (int i = 0; i < n; i++) {
		temp[i] = ptr[i];
	}
	temp[n](first_name, second_name, year, salary);
	n++;
	delete[] ptr;
	ptr = temp;
}

void DB::Delete() {
	if (n == 0)
		return;
	Workers* temp = new Workers[n - 1];
	for (int i = 0; i < (n - 1); i++)
		temp[i] = ptr[i];
	n--;
	delete[] ptr;
	ptr = temp;
}