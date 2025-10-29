#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int numbers[5];
	cout << "Элементы массива:\n";
	for (int i = 0; i < 5; i++) {
		numbers[i] = rand() % 10 + 1;
		cout << numbers[i] << " ";
	}
	cout << endl;
	int max_element = numbers[0];
	for (int i = 0; i < 5; i++) {
		if (numbers[i] > max_element) {
			max_element = numbers[i];
		}
	}
	cout << "Максимальный элемент:" << max_element << " ";
	return 0;
}