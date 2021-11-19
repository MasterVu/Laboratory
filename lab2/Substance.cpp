#include "lab2.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
Substance::Substance() {
	this->subs = "unknown";
	this->type = ' ';
	this->t_min = 0;
	this->t_max = 0;
}
Substance::Substance(string subs, char type, double t_min, double t_max) {
	this->subs = subs;
	this->type = type;
	this->t_min = t_min;
	this->t_max = t_max;
}
void Substance::SetSubs(string a) {
	subs = a;
}
void Substance::SetType(char a) {
	type = a;
}
void Substance::SetT_min(double a) {
	t_min = a;
}
void Substance::SetT_max(double a) {
	t_max = a;
}
string Substance::GetSubs() {
	return this->subs;
}
char Substance::GetType() {
	return this->type;
}
double Substance::GetT_min() {
	return this->t_min;
}
double Substance::GetT_max() {
	return this->t_max;
}

Substance Substance::operator = (const Substance& obj) {
	subs = obj.subs;
	type = obj.type;
	t_min = obj.t_min;
	t_max = obj.t_max;
	return *this;
}

Substance Substance::operator () (string a, char b, double c, double d) {
	subs = a;
	type = b;
	t_min = c;
	t_max = d;
	return *this;
}

char Substance::operator [] (int i) {
	char q;
	if (subs.size() < i)
		q = '0';
	else
		q = subs[i];
	return q;
}


