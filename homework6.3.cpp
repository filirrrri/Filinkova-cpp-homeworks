#include <iostream>
//#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	string first_world;
	string second_world;
	cout << "¬ведите первую строку:";
	cin >> first_world;
	cout << "¬ведите вторую строку:";
	cin >> second_world;
	cout << "–езультат: " << first_world + second_world << endl;
	return 0;
}