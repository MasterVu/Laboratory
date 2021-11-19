#include <iostream>
using namespace std;

class B1 {
	int b1;
public:
	B1(int x) {
		b1 = x;
	}
	void showB1() {
		cout << "b1 = " << b1 << endl;
	}
};

class B2 {
	int b2;
public:
	B2(int x) {
		b2 = x;
	}
	void showB2() {
		cout << "b2 = " << b2 << endl;
	}
};

class D1 : virtual public B1 {
	int d1;
public:
	D1(int x, int y) : B1(y) {
		d1 = x;
	}
	void showD1() {
		cout << "d1 = " << d1 << endl;
		showB1();
	}
};

class D2 : virtual protected B1, public B2 {
	int d2;
public:
	D2(int x, int y, int z) : B1(y), B2(z) {
		d2 = x;
	}
	void showD2() {
		cout << "d2 = " << d2 << endl;
		showB1();
		showB2();
	}
};

class D3 : public D1, protected D2 {
	int d3;
public:
	D3(int x, int y, int z, int i, int j) : B1(z), D1(y, z), D2(i, z, j) {
		d3 = x;
	}
	void showD3() {
		cout << "d3 = " << d3 << endl;
		cout << "Следуя левой ветви наследования:\n";
		showD1();
		cout << "Следуя правой ветви наследования:\n";
		showD2();
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	D3 obj(1, 2, 3, 4, 5);
	obj.showD3();
	system("pause");
	return 0;
}