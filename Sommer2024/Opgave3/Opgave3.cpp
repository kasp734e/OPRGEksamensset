#include "Product.h"
#include "Store.h"

#include <iostream>
int main(){

   // Product Apple ("Apple", 2, 10);

   // std::cout << Apple.to_string();
// opgave f1


    Store store_1("store_1");
    std::cout << store_1.total_inventory() << std::endl;
    std::cout << store_1.total_quantity() << std::endl;
    
// opgave f2

Store store_2("store_2");

store_2.add_product("Apples", 5.25, 10);
store_2.add_product("Oranges", 3.25, 20);
store_2.add_product("Pears", 4.25, 5);

std::cout << store_2.total_quantity() << std::endl;
std::cout << store_2.total_inventory() << std::endl;
    
    
    return 0;
}