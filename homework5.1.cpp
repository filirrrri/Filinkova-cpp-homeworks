#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int first_num;
	int second_num;
	cout << "Введите первое число:";
	cin >> first_num;
	cout << "Введите второе число:";
	cin >> second_num;
	int and_result = first_num & second_num;
	int or_result = first_num | second_num;
	int xor_result = first_num ^ second_num;
	cout << "Результат побитового AND: " << and_result << endl;
	cout << "Результат побитового OR: " << or_result << endl;
	cout << "Результат побитового XOR: " << xor_result << endl;
	return 0;
}