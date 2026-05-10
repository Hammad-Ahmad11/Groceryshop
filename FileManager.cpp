#include "FileManager.h"
#include <fstream>

void FileManager::save(vector<Product>& p) {

    ofstream file("products.txt");

    for(auto &x : p) {
        file << x.getID() << " "
             << x.getName() << " "
             << x.getPrice() << " "
             << x.getQuantity()
             << endl;
    }

    file.close();
}

void FileManager::load(vector<Product>& p) {

    ifstream file("products.txt");

    int id, qty;
    float price;
    string name;

    while(file >> id >> name >> price >> qty) {

        Product temp(id, name, price, qty);
        p.push_back(temp);
    }

    file.close();
}