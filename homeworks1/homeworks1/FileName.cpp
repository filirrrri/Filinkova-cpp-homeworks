#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your name:"; // запрос имени пользователя
	string userName; //инициализация переменной
	cin >> userName; //ввод имени
	cout << "Hello, " << userName; //вывод имени пользователя
	return 0;
}