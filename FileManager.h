#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include "Product.h"

class FileManager {

public:
    static void save(vector<Product>& p);
    static void load(vector<Product>& p);
};

#endif