#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // вводим русский язык
	cout << "Введите первое число: ";
	int first_num; //запрашиваем первое число
	cin >> first_num; //выводим первое число
	cout << "Введите второе число: ";
	int second_num; //запрашиваем второе число
	cin >> second_num; //выводим второе число
	int result = (first_num % second_num); //переменная остатка от деления
	cout << "Остаток от деления: " << result;
	return 0;
}