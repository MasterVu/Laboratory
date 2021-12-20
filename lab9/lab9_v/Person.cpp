#include "lab9_v.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
	name = "unknown";
	age = 0;
}
Person::Person(string x) {
	name = x;
	age = 0;
}
Person::Person(int x) {
	name = "unknown";
	age = x;
}
string Person::GetName() {
	return name;
}
int Person::GetAge() {
	return age;
}
void Person::SetName(string s) {
	name = s;
}
void Person::SetAge(int n) {
	age = n;
}
//bool Compare::operator() () {
//	if ()
//}
bool Person::operator()(const Person& obj1, const Person& obj2) const {
	return obj1.age < obj2.age;
}