#include "lab11.h"

using namespace std;

int main() {
	Workers obj[2];
	string name1, name2;
	int y, s;
	cout << "Using of SET function\n\n";
	for (int i = 0; i < 2; i++) {
		cout << "Second name: ";
		cin >> name1;
		cout << "First name: ";
		cin >> name2;
		cout << "Year: ";
		cin >> y;
		cout << "Salary: ";
		cin >> s;
		obj[i].SetInfo(name1, name2, y, s);
	}
	cout << "Using of SHOW function\n\n";
	obj[0].Show();
	cout << "\n\n";
	obj[1].Show();
	cout << "\n\n";
	cout << "Using of GET function\n\n";
	name1 = obj[0].GetSecondName();
	name2 = obj[0].GetFirstName();
	y = obj[0].GetYear();
	s = obj[0].GetSalary();
	cout << name1 << " " << name2 << " " << y << " " << s << "\n\n";
	system("pause");
}