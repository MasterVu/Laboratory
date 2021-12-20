#include <iostream>
#include <assert.h>
using namespace std;

template <class T>
T Min(T a, T b) {
	if (a < b)
		return a;
	else
		return b;
}

template <class T>
T* Sort(T* arr, int n) {
	for (int i = 1; i < n; i++)
		for (int j = 0; j < n - i; j++)
			if (arr[j] > arr[j + 1]) {
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	return arr;
}

template <class T>
T Sum(T* arr, int n) {
	T temp = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			temp += arr[i];
	return temp;
}

void TestMin() {
	assert(Min(5, 7) == 5);
	assert(Min(7.34, -6.7) == -6.7);
	assert(Min('c', 'r') == 'c');
	cout << "Function Min() hasn't got any problems!\n";
}

void TestSort() {
	int* arr1 = new int[5] { 4, 0, 5, 1, 9 };
	int* exp_arr1 = new int[5] { 0, 1, 4, 5, 9 };
	assert(*Sort(arr1, 5) == *exp_arr1);
	char* arr2 = new char[5] { 'a', 'd', 'c', 'e', 'b' };
	char* exp_arr2 = new char[5]{ 'a', 'b', 'c', 'd', 'e' };
	assert(*Sort(arr2, 5) == *exp_arr2);
	delete[] arr1;
	delete[] exp_arr1;
	delete[] arr2;
	delete[] exp_arr2;
	cout << "Function Sort() hasn't got any problems!\n";
}

void TestSum() {
	int* arr1 = new int[5]{ -3, 0, 6, 3, -1 };
	int sum1 = 9;
	double* arr2 = new double[5]{ 0, 3.4, -1.1, 4.9, -2.2 };
	double sum2 = 8.3;
	assert(Sum(arr1, 5) == sum1);
	assert(Sum(arr2, 5) == sum2);
	delete[] arr1;
	delete[] arr2;
	cout << "Function Sum() hasn't got any problems!\n";
}

int main() {
	TestMin();
	TestSort();
	TestSum();
	system("pause");
}