#include <iostream>
#include <windows.h>
using namespace std;

void pryam() {

	int height, width;
	cout << "������ ������: ";
	cin >> height;
	cout << "������ ������: ";
	cin >> width;
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < height - 1; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		cout << endl;
	}
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}

}


int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	pryam();

	return 0;
}