#include <iostream>
using namespace std;


void changeSigns(int& a, int& b) {
    a = -a;  
    b = -b;  
    
}
int main() {
    setlocale(LC_ALL, "Russian");
    int first_num;
    int second_num;
    cout << "Введите первое число: ";
    cin >> first_num;
    cout << "Введите второе число: ";
    cin >> second_num;
    changeSigns(first_num, second_num);
    cout << "После изменения знаков: " << first_num << " " << second_num;
    return 0;
}