#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int nums[] = {3,2,4};
	int n = 3; // размер массива, если надо, чтобы работало для любой комбинации чисел
	int target = 6;
	cout << "Входные данные: nums = ";
	for (int x : nums) {
		cout << x << ", ";
	}
	cout << "target = " << target << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[i] + nums[j] == target) {
				cout << "Выходные данные: " << i << ", " << j << endl;
				return 0;
			}
		}
	}
}