#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int first_num;
	int second_num;
	cout << "������� ������ �����:";
	cin >> first_num;
	cout << "������� ������ �����:";
	cin >> second_num;
	int and_result = first_num & second_num;
	int or_result = first_num | second_num;
	int xor_result = first_num ^ second_num;
	cout << "��������� ���������� AND: " << and_result << endl;
	cout << "��������� ���������� OR: " << or_result << endl;
	cout << "��������� ���������� XOR: " << xor_result << endl;
	return 0;
}