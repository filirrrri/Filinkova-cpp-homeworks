#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int cx = 2;
    int cy = -1;
    int r = 5;
    int x;
    int y;
    cout << "Введите координаты точки (x, y):";
    cin >> x >> y;
    int distanceSquared = (x - cx) * (x - cx) + (y - cy) * (y - cy);
    int radiusSquared = r * r;
    cout << "Выходные данные:";
    if (distanceSquared == radiusSquared) {
        cout << "Точка на границе окружности";
    }
    else if (distanceSquared < radiusSquared) {
        cout << "Точка внутри окружности";
    }
    else {
        cout << "Точка вне окружности";
    }
    return 0;
}
