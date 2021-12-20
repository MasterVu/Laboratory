#include "lab9_v.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool operator< (const Person& obj1, const Person& obj2) {
	if (obj1.name < obj2.name)
		return true;
	else
		return false;
}
bool operator== (const Person& obj1, const string& obj2) {
	if (obj1.name == obj2)
		return true;
	else
		return false;
}

void menu(Staff* list) {
	system("cls");
	list->ShowAll();
	cout << "\n\n";





	system("pause");
	menu(list);
}

int main() {
	Staff* list1 = new Staff;
	Staff* list2 = new Staff(Person());
	ifstream in("text.txt");
	Person* temp1 = new Person;
	Person* temp2 = new Person;
	string name;
	int age;
	for (int i = 0; i < 3; i++) {
		in >> name >> age;
		temp1->SetName(name);
		temp2->SetAge(age);
		list1->Insert(*temp1, *temp2);
	}
	for (int i = 0; i < 3; i++) {
		in >> name >> age;
		temp1->SetName(name);
		temp2->SetAge(age);
		list2->Insert(*temp1, *temp2);
	}
	in.close();
	delete temp1;
	delete temp2;
	list1->ShowAll();

	delete list1;
	delete list2;
	return 0;
}