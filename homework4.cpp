#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char simbol;
	cout << "Введите символ:";
	cin >> simbol;
	cout << "Символ:" << simbol << endl;
	int asciiValue = static_cast<int>(simbol);
	cout << "Код:" << asciiValue << endl;
	int nextValue = static_cast<int>(simbol + 1);
	cout << "Код следующего символа:" << nextValue << endl;
	char nextSimbol = static_cast<char>(simbol + 1);
	cout << "Следующий символ:" << static_cast<char>(simbol + 1);
	return 0;
}