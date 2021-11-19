#pragma once
#include <iostream>
#include <string>

using namespace std;

class Workers {
	string second_name;
	string first_name;
	int year;
	int salary;
public:
	void SetInfo(string, string, int, int);
	string GetSecondName();
	string GetFirstName();
	int GetYear();
	int GetSalary();
	void Show();
};