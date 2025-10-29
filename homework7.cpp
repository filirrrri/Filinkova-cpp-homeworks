#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Ввод: x = ";
	cin >> x;
	cout << "Вывод: ";
	if (x < 0) {
		cout << "false";
		return 0;
	}
	int original = x;
	int count = 0;
	while (x > 0) {
		count = count * 10 + x % 10;
		x = x / 10;
	}
	if (original == count) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}
