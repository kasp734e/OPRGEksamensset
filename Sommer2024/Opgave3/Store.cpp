#include <iostream>
#include <vector>
#include "Store.h"
#include "Product.h"


    Store::Store(std::string name) {

        this->name = name;
    }

    std::string Store::get_name() {
        return this->name;
    }

    void Store::add_product(std::string name, float price, int quantity) {

        Products.push_back(Product(name, price, quantity));

    }
    double Store::total_inventory() {
        double prisTotal = 0;
        for (auto product : Products) {
            prisTotal += product.get_price()*product.get_quantity();
        }
        return prisTotal;
    }
    int Store::total_quantity() {
        int total = 0;
        for (auto product : Products) {
            total += product.get_quantity();
        }
        return total;
    }
