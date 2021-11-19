#include "lab4.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
Workers::Workers() {
	this->first_name = "unknown";
	this->second_name = "unknown";
	this->year = 0;
	this->salary = 0;
}
Workers::Workers(string first_name, string second_name, int year, int salary) {
	this->first_name = first_name;
	this->second_name = second_name;
	this->year = year;
	this->salary = salary;
}
void Workers::SetFirstName(string a) {
	first_name = a;
}
void Workers::SetSecondName(string a) {
	second_name = a;
}
void Workers::SetYear(int a) {
	year = a;
}
void Workers::SetSalary(int a) {
	salary = a;
}
string Workers::GetFirstName() {
	return this->first_name;
}
string Workers::GetSecondName() {
	return this->second_name;
}
int Workers::GetYear() {
	return this->year;
}
int Workers::GetSalary() {
	return this->salary;
}

Workers Workers::operator = (const Workers& obj) {
	first_name = obj.first_name;
	second_name = obj.second_name;
	year = obj.year;
	salary = obj.salary;
	return *this;
}

Workers Workers::operator () (string a, string b, int c, int d) {
	first_name = a;
	second_name = b;
	year = c;
	salary = d;
	return *this;
}

char Workers::operator [] (int i) {
	char q;
	if (first_name.size() < i)
		q = '0';
	else
		q = first_name[i];
	return q;
}


