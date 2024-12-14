#include "Product.h"

    Product::Product(std::string name, double price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    int Product::get_quantity() {
        return quantity;
    }
    double Product::get_price() {

        return price;
    }
    std::string Product::get_name() {

        return name;
    }

    std::string Product::to_string() {

        return name +" Price:"+ std::to_string(price)+" Quantity:"+ std::to_string(quantity);
    }
