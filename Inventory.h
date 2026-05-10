#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Product.h"

using namespace std;

class Inventory {

private:
    vector<Product> products;

public:

    vector<Product>& getProducts();

    void addProduct();
    void viewProducts();
    void searchProduct();
    void updateProduct();
    void deleteProduct();
    void sellProduct();
    void returnProduct();
    void lowStockAlert();
};

#endif