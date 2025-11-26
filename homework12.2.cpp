#include <iostream>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    void setName(string n);
    void setPrice(double p);
    void setQuantity(int q);
    bool isAvailable() const;
    void show();
};

void Product::setName(string n) {
    name = n;
}

void Product::setPrice(double p) {
    price = p;
}

void Product::setQuantity(int q) {
    quantity = q;
}
bool Product::isAvailable() const {
    return quantity > 0;
}
void Product::show() {
    setlocale(LC_ALL, "Russian");
    cout << "Товар: " << name << endl;
    cout << "Цена: " << price << endl;
    cout << "Количество на складе: " << quantity << endl;
    cout << "Статус: " << (isAvailable() ? "В наличии" : "Нет в наличии") << endl;
}

//один продукт
int main() {
    setlocale(LC_ALL, "Russian");
    Product p1;
    p1.setName("Телефон");
    p1.setPrice(19990);
    p1.setQuantity(5);
    p1.show();

    return 0;
}