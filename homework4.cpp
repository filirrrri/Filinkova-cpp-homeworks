#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char simbol;
	cout << "������� ������:";
	cin >> simbol;
	cout << "������:" << simbol << endl;
	int asciiValue = static_cast<int>(simbol);
	cout << "���:" << asciiValue << endl;
	int nextValue = static_cast<int>(simbol + 1);
	cout << "��� ���������� �������:" << nextValue << endl;
	char nextSimbol = static_cast<char>(simbol + 1);
	cout << "��������� ������:" << static_cast<char>(simbol + 1);
	return 0;
}