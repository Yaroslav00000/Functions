#include <iostream>
#include <windows.h>
using namespace std;

void simple_number() {
	int n;
	cout << "Введіть число: ";
	cin >> n;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			cout << "Число не є простим" << endl;
			return;
		}
	}
	cout << "Число є простим" << endl;

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	simple_number();
	return 0;
}