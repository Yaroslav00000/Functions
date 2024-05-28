#include <iostream>
#include <windows.h>
using namespace std;
void kyb() {

	int kyb_number = 0, number;
	cout << "Введіть число для визначення його кубу: ";
	cin >> number;
	kyb_number = number * number;
	cout << endl;
	cout << "Куб " << number << " є " << kyb_number << endl;

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	kyb();
	return 0;
}