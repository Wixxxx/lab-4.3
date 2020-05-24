// lab 4.3.cpp : 4.3
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

double F(int n);

double G(int n);
void Print(int* arr, int n) {
	string s = ", ";
	for (int i = 0; i < n; i++) {
		if (i == n - 1)
		{
			s == ".";
		}
		cout << arr[i] << s;
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "");

	int n = 10;
	bool check = false;
	int j = 1;

	while (j != 2)
	{
		string s = ", ";
		if (check) {
			cout << "Хотите еще попробовать?\n1 - Da \n2 - Нет\n>>";
			while (!(cin >> j) || j < 1 || j > 2) {
				cout << "\nОшибка! Введите 1 или 2: ";
				cin.clear();
				fflush(stdin);
			}
		}

		if (j == 2)
			break;

		cout << "Введите n: ";
		while (!(cin >> n) || j <= 0) {
			cout << "\nОшибка! Введите 1 или 2: ";
			cin.clear();
			fflush(stdin);
		}

		cout << "F(n): ";
		for (size_t i = 1; i <= n; i++)
		{
			if (i == n)
				s = ".";

			cout << F(i) << s;
		}

		cout << endl;
		s = ", ";
		cout << "G(n): ";
		for (size_t i = 1; i <= n; i++)
		{
			if (i == n)
				s = ".";

			cout << G(i) << s;
		}

		cout << endl;
		check = true;
	}


	system("pause");

}
double F(int n) {
	if (n == 1) return -5;
	else {
		return (-4 * F(n - 1) + G(n - 1));
	}
}

double G(int n) {
	if (n == 1) return 1;
	else {
		return (-2 * F(n - 1) + G(n - 1));
	}
}
