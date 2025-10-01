#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); //вводим русский €зык
	cout << "¬ведите первое число: ";
	float first_num;//запрашиваем первое число
	cin >> first_num;//выводим первое число
	cout << "¬ведите второе число: ";
	float second_num;//запрашиваем второе число
	cin >> second_num;//выводим второе число
	cout << "¬ведите третье число: ";
	float third_num;//запрашиваем третье число
	cin >> third_num;//выводим третье число
	float average = (first_num + second_num + third_num) / 3; // переменна€ среднего арифмитического
	cout << "—реднее арифметическое: " << average;
	return 0;
}