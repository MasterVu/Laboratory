#pragma once
#include <string>

using namespace std;

class Workers {
public:
	string first_name;
	string second_name;
	int year;
	int salary;
public:
	Workers();
	Workers(string, string, int, int);
	void SetFirstName(string);
	void SetSecondName(string);
	void SetYear(int);
	void SetSalary(int);
	string GetFirstName();
	string GetSecondName();
	int GetYear();
	int GetSalary();
	Workers operator = (const Workers&);
	Workers operator () (string, string, int, int);
	char operator [] (int);
	friend Workers operator+ (const Workers& obj1, const Workers& obj2);
	friend bool operator== (const Workers& obj1, const Workers& obj2);
	friend ostream& operator<< (ostream& out, const Workers& obj);
	friend istream& operator>> (istream& in, Workers& obj);
	friend class DB;
};

class DB {
public:
	Workers* ptr;
	bool sorted;
	int n;
public:
	DB();
	void DataIn();
	void Show();
	void Sort();
	void Delete();
	void Add(string, string, int, int);
	friend class Workers;
};

void menu(DB*);
