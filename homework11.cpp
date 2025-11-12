#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string s = "LVIII";
    int result = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') result += 1;
        else if (s[i] == 'V') result += 5;
        else if (s[i] == 'X') result += 10;
        else if (s[i] == 'L') result += 50;
        else if (s[i] == 'C') result += 100;
        else if (s[i] == 'D') result += 500;
        else if (s[i] == 'M') result += 1000;
    }

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) result -= 2;
        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) result -= 20;
        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) result -= 200;
    }

    cout << "Входные данные: s = " << s << endl;
    cout << "Выходные данные:" << result;
    return 0;
}