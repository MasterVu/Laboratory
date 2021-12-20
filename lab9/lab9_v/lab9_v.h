#pragma once
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Person {
	string name;
	int age;
public:
	Person();
	Person(string);
	Person(int);
	void SetName(string);
	void SetAge(int);
	string GetName();
	int GetAge();
	friend bool operator< (const Person&, const Person&);
	friend bool operator== (const Person&, const string&);
	bool operator() (const Person&, const Person&) const;
	friend class Staff;
};

class Compare {
	bool operator() ();
};

class Staff {
	map<Person, Person> mp;
public:
	Staff();
	Staff(Person);
	void Insert(const Person&, const Person&);
	void Show(int);
	void ShowAll();
	void ShowName(int);
	void ShowAge(int);
	void Delete(string);
	void Change(int, const Person&, const Person&);
	void FindName(string);
	void FindAge(int);
};