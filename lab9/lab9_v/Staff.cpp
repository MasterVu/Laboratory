#include "lab9_v.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

Staff::Staff() {
	map<Person, Person> mp;
}
Staff::Staff(Person obj) {
	map<Person, Person, Person> mp;
}

void Staff::Insert(const Person& obj1, const Person& obj2) {
	mp.insert(obj1, obj2);
}
void Staff::Show(int n) {
	map <Person, Person> ::iterator it;
	it = mp.begin();
	advance(it, n);
	//while (it != mp.end()) {
	cout << left << "Name: " << setw(10) << it->first.name << "Age: " << setw(10) << it->second.age << endl;
		//it++;
	//}
}
void Staff::ShowAll() {
	for (const auto& p : mp) {
		cout << left << "Name: " << setw(10) << p.first.name << "Age: " << setw(10) << p.second.age << endl;
	}
}
void Staff::ShowName(int n) {
	map <Person, Person> ::iterator it;
	it = mp.begin();
	advance(it, n);
	cout << left << "Name: " << setw(10) << it->first.name << endl;
}
void Staff::ShowAge(int n) {
	map <Person, Person> ::iterator it;
	it = mp.begin();
	advance(it, n);
	cout << left << "Age: " << setw(10) << it->second.age << endl;
}
void Staff::Delete(string s) {
	map <Person, Person> ::iterator it;
	it = mp.find(s);
}
void Staff::Change(int n, const Person& obj1, const Person& obj2) {
	map <Person, Person> ::iterator it;
	it = mp.begin();
	advance(it, n);
	mp.try_emplace(obj1, obj2, n);
}
void Staff::FindName(string s) {
	map <Person, Person> ::iterator it;
	it = mp.find(s);
	cout << left << "Name: " << setw(10) << it->first.name << "Age: " << setw(10) << it->second.age << endl;
}
void Staff::FindAge(int n) {
	map <Person, Person> ::iterator it;
	it = mp.find(n);
	cout << left << "Name: " << setw(10) << it->first.name << "Age: " << setw(10) << it->second.age << endl;
}