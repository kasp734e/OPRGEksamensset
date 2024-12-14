#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product {
    private:
        std::string name;
        double price;
        int quantity;

    public:
        Product(std::string name, double price, int quantity);
        int get_quantity();
        double get_price();
        std::string get_name();
        std::string to_string();
};

#endif
