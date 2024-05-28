#include <iostream>
#include <windows.h>

using namespace std;
void number() {

	int number;
	cout << "¬вед≥ть число: ";
	cin >> number;
	if (number > 0) {
		cout << "„исло " << number << " Ї додатн≥м  " << endl;
	}
	else {
		cout << "Error!!!" << endl;
	}
	cout << endl;


}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	number();

	return 0;
}