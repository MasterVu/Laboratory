#pragma once
#include "MyForm.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;

class Value {
public:
	virtual System::String^ Out() = 0;
};

class Number : virtual Value {
	double num;
public:
	System::String^ Out() {
		ofstream out("out.txt");
		out << num;
		out.close();
		return num.ToString();
	}
	void Set(double x) {
		num = x;
	}
	double Get() {
		return num;
	}
};