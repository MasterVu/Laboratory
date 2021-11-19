#pragma once
#include <string>
#define N 5

using namespace std;

class Substance {
private:
	string subs;
	char type;
	double t_min;
	double t_max;
public:
	Substance();
	Substance(string, char, double, double);
	void SetSubs(string);
	void SetType(char);
	void SetT_min(double);
	void SetT_max(double);
	string GetSubs();
	char GetType();
	double GetT_min();
	double GetT_max();
	friend void DataIn(Substance*);
	friend void Show(Substance*);
	Substance operator = (const Substance&);
	Substance operator () (string, char, double, double);
	char operator [] (int);
	friend Substance operator+ (const Substance& obj1, const Substance& obj2);
	friend bool operator== (const Substance& obj1, const Substance& obj2);
	friend ostream& operator<< (ostream& out, const Substance& obj);
	friend istream& operator>> (istream& in, Substance& obj);
};

void ShowHeader();

void Show(Substance*);

void DataIn(Substance*);

void menu(Substance*);