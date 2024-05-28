#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

void factorial() {

	int factorial = 1, number;
	cout << "Введіть число для визначення факторіалу: ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	cout << endl;
	cout << "Факторіал " << number << " є " << factorial << endl;

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	factorial();

	return 0;
}