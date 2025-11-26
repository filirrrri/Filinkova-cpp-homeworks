#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string s;
    cout << "Входные данные: s = ";
    cin >> s;
    int round = 0; // счетчик для круглых скобок ()
    int square = 0; // счетчик для квадратных скобок []
    int figure = 0; // счетчик для фигурных скобок {}

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') round++;
        else if (s[i] == ')') round--;
        else if (s[i] == '[') square++;
        else if (s[i] == ']') square--;
        else if (s[i] == '{') figure++;
        else if (s[i] == '}') figure--;
    }

    if (round == 0 && square == 0 && figure == 0) {
        cout << "Выходные данные: true";
    }
    else {
        cout << "Выходные данные: false";
    }

    return 0;
}