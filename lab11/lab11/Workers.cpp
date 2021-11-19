#include "lab11.h"

void Workers::SetInfo(string name1, string name2, int y, int s) {
	second_name = name1;
	first_name = name2;
	year = y;
	salary = s;
}
string Workers::GetSecondName() {
	return second_name;
}
string Workers::GetFirstName() {
	return first_name;
}
int Workers::GetYear() {
	return year;
}
int Workers::GetSalary() {
	return salary;
}
void Workers::Show() {
	cout << "Second name: " << second_name << endl;
	cout << "First name: " << first_name << endl;
	cout << "Year of birth: " << year << endl;
	cout << "Salary: " << salary << endl;
}