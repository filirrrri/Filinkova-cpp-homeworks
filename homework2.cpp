#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); //������ ������� ����
	cout << "������� ������ �����: ";
	float first_num;//����������� ������ �����
	cin >> first_num;//������� ������ �����
	cout << "������� ������ �����: ";
	float second_num;//����������� ������ �����
	cin >> second_num;//������� ������ �����
	cout << "������� ������ �����: ";
	float third_num;//����������� ������ �����
	cin >> third_num;//������� ������ �����
	float average = (first_num + second_num + third_num) / 3; // ���������� �������� ���������������
	cout << "������� ��������������: " << average;
	return 0;
}