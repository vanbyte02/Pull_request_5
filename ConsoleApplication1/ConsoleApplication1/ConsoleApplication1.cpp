#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int numbers1;
	cout << "Введите число 1:\n";
	cin >> numbers1;

	char znak;
	cout << "Введите знак:\n";
	cin >> znak;

	int numbers2;
	cout << "Введите число 2:\n";
	cin >> numbers2;

	switch (znak) {


	case '/':
		if (numbers2 != 0) {
			cout << endl << numbers1 / numbers2;
		}
		else 
			cout << endl << "Ты че дебик? На ноль делить нельзя!";
		break;
	}
	}
}
