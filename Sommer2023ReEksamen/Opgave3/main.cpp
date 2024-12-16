#include "MineralSample.h"
#include "Samples.h"
#include <iostream>
#include <string>

int main() {

    MineralSample sample1(19.3, 1);
    MineralSample sample2(105.0, 10.0);
    MineralSample sample3(100.0, 100.0);

    std::cout << sample1.is_silver() << sample1.is_gold() << std::endl;
    std::cout << sample2.is_silver() << sample2.is_gold() << std::endl;
    std::cout << sample3.is_silver() << sample3.is_gold() << std::endl;

    Samples dimmere;
    dimmere.add_sample(19.3, 1);
    dimmere.add_sample(105.0, 10.0);
    dimmere.add_sample(100.0, 100.0);

    std::cout << std::to_string(dimmere.relative_number_of_gold_samples());
    return 0;
}
