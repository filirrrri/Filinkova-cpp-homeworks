#include <iostream>
using namespace std;

void countdown(int n) {
	if (n == 0) {
		return;
	}
	cout << n << " ";
	countdown(n - 1);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "¬ведите число: ";
	cin >> num;
	countdown(num);
	return 0;
}