#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product {

private:
    int id;
    string name;
    float price;
    int quantity;

public:

    Product();
    Product(int id, string name, float price, int quantity);

    int getID();
    string getName();
    float getPrice();
    int getQuantity();

    void setData(int id, string name, float price, int quantity);

    void reduceStock(int qty);
    void increaseStock(int qty);

    void display();
};

#endif