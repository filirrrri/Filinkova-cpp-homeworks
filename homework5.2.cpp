#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int point;
	cout << "������� ���������� ������:";
	cin >> point;
	string grade;
	if (point < 40) {
		grade = "�������������������";
	}
	else if (point >= 40 && point < 60) {
		grade = "�����������������";
	}
	else if (point >= 60 && point < 80) {
		grade = "������";
	}
	else if (point >= 80) {
		grade = "�������";
	}
	cout << "������:" << grade;
	return 0;

}