#include "Product.h"

Product::Product() {
    id = 0; name = ""; price = 0; quantity = 0;
}

Product::Product(int i, string n, float p, int q) {
    id = i; name = n; price = p; quantity = q;
}

int Product::getID() { return id; }
string Product::getName() { return name; }
float Product::getPrice() { return price; }
int Product::getQuantity() { return quantity; }

void Product::setData(int i, string n, float p, int q) {
    id = i; name = n; price = p; quantity = q;
}

void Product::reduceStock(int q) { quantity -= q; }
void Product::increaseStock(int q) { quantity += q; }

void Product::display() {
    cout << "\nID: " << id
         << "\nName: " << name
         << "\nPrice: " << price
         << "\nQuantity: " << quantity
         << "\n-------------------";
}