#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "Введите размер массива (1-100): ";
    cin >> N;

    if (N < 1 || N > 100) {
        cout << "Размер массива должен быть от 1 до 100!" << endl;
        return 1;
    }

    int arr[100];
    cout << "Введите " << N << " элементов массива:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Введите число x для поиска: ";
    cin >> x;

    int firstIndex = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            firstIndex = i;
            break; 
        }
    }

    if (firstIndex != -1) {
        cout << "Индекс первого вхождения: " << firstIndex << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}