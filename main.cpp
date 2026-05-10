#include <iostream>
#include "Inventory.h"
#include "FileManager.h"

using namespace std;

int main() {

    Inventory inv;

    FileManager::load(inv.getProducts());

    int choice;

    do {

        cout << "\n==============================";
        cout << "\n  GROCERY SHOP SYSTEM";
        cout << "\n==============================";

        cout << "\n1 Add Product";
        cout << "\n2 View Products";
        cout << "\n3 Search";
        cout << "\n4 Update";
        cout << "\n5 Delete";
        cout << "\n6 Sell";
        cout << "\n7 Return";
        cout << "\n8 Low Stock";
        cout << "\n9 Save";
        cout << "\n10 Exit";

        cout << "\nChoice: ";
        cin >> choice;

        switch(choice) {

            case 1: inv.addProduct(); break;
            case 2: inv.viewProducts(); break;
            case 3: inv.searchProduct(); break;
            case 4: inv.updateProduct(); break;
            case 5: inv.deleteProduct(); break;
            case 6: inv.sellProduct(); break;
            case 7: inv.returnProduct(); break;
            case 8: inv.lowStockAlert(); break;

            case 9:
                FileManager::save(inv.getProducts());
                cout << "\nSaved!";
                break;

            case 10:
                FileManager::save(inv.getProducts());
                cout << "\nAuto Saved. Exit.";
                break;

            default:
                cout << "\nInvalid!";
        }

    } while(choice != 10);

    return 0;
}