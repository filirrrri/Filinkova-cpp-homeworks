#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // ������ ������� ����
	cout << "������� ������ �����: ";
	int first_num; //����������� ������ �����
	cin >> first_num; //������� ������ �����
	cout << "������� ������ �����: ";
	int second_num; //����������� ������ �����
	cin >> second_num; //������� ������ �����
	int result = (first_num % second_num); //���������� ������� �� �������
	cout << "������� �� �������: " << result;
	return 0;
}