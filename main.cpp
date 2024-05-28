#include <iostream>
#include <Windows.h>

using namespace std;

void number() {

	int number_1, number_2;
	cout << "¬вед≥ть число 1: ";
	cin >> number_1;
	cout << "¬вед≥ть число 2: ";
	cin >> number_2;
	if (number_1 > number_2) {
		cout << "„исло " << number_1 << " б≥льше за число  " << number_2 << endl;
	}
	else {
		cout << "„исло " << number_2 << " б≥льше за число  " << number_1 << endl;
	}
	cout << endl;


}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	number();

	return 0;
}