#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int point;
	cout << "¬ведите количество баллов:";
	cin >> point;
	string grade;
	if (point < 40) {
		grade = "неудовлетворительно";
	}
	else if (point >= 40 && point < 60) {
		grade = "удовлетворительно";
	}
	else if (point >= 60 && point < 80) {
		grade = "хорошо";
	}
	else if (point >= 80) {
		grade = "отлично";
	}
	cout << "ќценка:" << grade;
	return 0;

}