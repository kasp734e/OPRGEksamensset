#ifndef STORE_H
#define STORE_H

#include <string>
#include <vector>
#include "Product.h"
class Store {

private: 
    std::string name;
    std::vector<Product> Products;

public:
    Store(std::string name);
    std::string get_name();
    void add_product(std::string name, float price, int quantity);
    double total_inventory();
    int total_quantity();


};

#endif