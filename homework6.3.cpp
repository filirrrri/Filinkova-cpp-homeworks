#include <iostream>
//#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string first_world;
	string second_world;
	cout << "������� ������ ������:";
	cin >> first_world;
	cout << "������� ������ ������:";
	cin >> second_world;
	cout << "���������: " << first_world + second_world << endl;
	return 0;
}