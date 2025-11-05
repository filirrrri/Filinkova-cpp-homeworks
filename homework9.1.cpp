#include <iostream>
using namespace std;

int minValue(int a, int b) {
	if (a < b) {
		return (a);
	}
	else {
		return (b);
	}
}

int main(){
	setlocale(LC_ALL, "Russian");
	int first_num;
	int second_num;
	cout << "Введите два числа: ";
	cin >> first_num >> second_num;
	int result = minValue(first_num, second_num);
	cout << "Минимум: " << result;
	return 0;
}