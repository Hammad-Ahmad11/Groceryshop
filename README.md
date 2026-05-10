1. PROJECT TITLE
Small Grocery Shop Inventory Management System with Return Policies
2. PROJECT DESCRIPTION
This project is a console-based Grocery Shop Inventory Management System developed in C++ using Object-Oriented Programming concepts. The system helps a small grocery shop owner manage products digitally instead of maintaining records manually in notebooks.

The system allows the user to add, update, delete, search, and display products. It also provides stock management, product selling, return handling, low stock alerts, and file handling for saving product records permanently.

The project demonstrates the practical implementation of OOP concepts such as classes, objects, encapsulation, constructors, modular programming, and file handling.
3. OBJECTIVES OF PROJECT
• To manage grocery shop inventory digitally
• To reduce manual record keeping
• To maintain product stock efficiently
• To implement return policies
• To practice Object-Oriented Programming concepts
• To use file handling for permanent storage
4. OOP CONCEPTS USED
1. Classes and Objects
2. Encapsulation
3. Constructors
4. Member Functions
5. Modular Programming
6. File Handling
7. Vectors (STL)
5. FEATURES OF PROJECT
• Add Product
• View Products
• Search Product
• Update Product
• Delete Product
• Sell Product
• Return Product
• Low Stock Alert
• Save Data to File
6. CLASS DIAGRAM (TEXT FORMAT)
+-------------------+
|      Product      |
+-------------------+
| - id              |
| - name            |
| - price           |
| - quantity        |
+-------------------+
| + addProduct()    |
| + displayProduct()|
| + updateProduct() |
| + reduceStock()   |
| + increaseStock() |
| + getID()         |
| + getPrice()      |
| + getQuantity()   |
+-------------------+

+----------------------+
|      Inventory       |
+----------------------+
| - products           |
+----------------------+
| + addProduct()       |
| + viewProducts()     |
| + searchProduct()    |
| + updateProduct()    |
| + deleteProduct()    |
| + sellProduct()      |
| + returnProduct()    |
| + lowStockAlert()    |
+----------------------+

+----------------------+
|     FileManager      |
+----------------------+
| + saveProducts()     |
+----------------------+
