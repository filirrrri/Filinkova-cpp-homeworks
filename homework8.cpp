#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string word;
	cout << "¬вод: word = ";
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		for (int j = i + 1; j < word.length(); j++) {
			if (tolower(word[i]) == tolower(word[j])) {
				cout << "false";
				return 0;
			}
		
		}

	}
	cout << "true";
	return 0;
}