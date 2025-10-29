#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "Ёлементы массива:\n";
	int matrix[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			matrix[i][j] = rand() % 6 + 1;
			cout << matrix[i][j]<<" ";
		
		}
		cout << endl;
	}
	return 0;
}