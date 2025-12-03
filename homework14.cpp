
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string words[] = { "bicycle", "jarmony", "flick", "sheep", "flick", "wolf" };
    const int size = 6;

    bool result[size];
    bool value= true;

    for (int i = 0; i < size; i++) {
        result[i] = value;

        if (words[i] == "flick") {
            value = !value;
        }
    }

    cout << "Результат: [";
    for (int i = 0; i < size; i++) {
        if (result[i] == true) {
            cout << "true";
        }
        else {
            cout << "false";
        }
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}
