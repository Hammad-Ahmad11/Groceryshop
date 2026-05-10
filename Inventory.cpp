#include "Inventory.h"

vector<Product>& Inventory::getProducts() {
    return products;
}

void Inventory::addProduct() {

    int id, qty;
    string name;
    float price;

    cout << "\nEnter ID: "; cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Price: "; cin >> price;

    cout << "Enter Quantity: "; cin >> qty;

    Product p;
    p.setData(id, name, price, qty);

    products.push_back(p);

    cout << "\nProduct Added!";
}

void Inventory::viewProducts() {

    if(products.empty()) {
        cout << "\nNo Products Found!";
        return;
    }

    for(auto &p : products)
        p.display();
}

void Inventory::searchProduct() {

    int id;
    cout << "\nEnter ID: ";
    cin >> id;

    for(auto &p : products) {
        if(p.getID() == id) {
            p.display();
            return;
        }
    }

    cout << "\nNot Found!";
}

void Inventory::updateProduct() {

    int id;
    cout << "\nEnter ID: ";
    cin >> id;

    for(auto &p : products) {
        if(p.getID() == id) {

            string name;
            float price;
            int qty;

            cin.ignore();
            cout << "New Name: ";
            getline(cin, name);

            cout << "New Price: ";
            cin >> price;

            cout << "New Qty: ";
            cin >> qty;

            p.setData(id, name, price, qty);

            cout << "\nUpdated!";
            return;
        }
    }

    cout << "\nNot Found!";
}

void Inventory::deleteProduct() {

    int id;
    cout << "\nEnter ID: ";
    cin >> id;

    for(int i = 0; i < products.size(); i++) {
        if(products[i].getID() == id) {
            products.erase(products.begin()+i);
            cout << "\nDeleted!";
            return;
        }
    }

    cout << "\nNot Found!";
}

void Inventory::sellProduct() {

    int id, qty;
    cout << "\nEnter ID: ";
    cin >> id;

    for(auto &p : products) {
        if(p.getID() == id) {

            cout << "Enter Qty: ";
            cin >> qty;

            if(qty <= p.getQuantity()) {

                p.reduceStock(qty);

                cout << "\nBill: " << qty * p.getPrice();
            }
            else {
                cout << "\nInsufficient Stock!";
            }

            return;
        }
    }
}

void Inventory::returnProduct() {

    int id, qty;
    cout << "\nEnter ID: ";
    cin >> id;

    for(auto &p : products) {
        if(p.getID() == id) {

            cout << "Return Qty: ";
            cin >> qty;

            p.increaseStock(qty);

            cout << "\nRefund: " << qty * p.getPrice();
            return;
        }
    }
}

void Inventory::lowStockAlert() {

    cout << "\n--- LOW STOCK ---\n";

    bool found = false;

    for(auto &p : products) {
        if(p.getQuantity() <= 5) {
            p.display();
            found = true;
        }
    }

    if(!found)
        cout << "\nNo Low Stock!";
}