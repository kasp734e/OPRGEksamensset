#include "Bloddonor.h"
#include <iostream>
#include <vector>

int main() {

    Bloddonor donor1;
    Bloddonor donor2("Jens", 30, "A", true);
    Bloddonor donor3("Ole", 40, "AB", false);

    donor1.print();
    donor2.print();
    donor3.print();

    donor1.setNavn("Kaj Ove");
    donor1.setBMI(15);
    donor1.setBlodtype("O");
    donor1.setRhesustype(false);

    donor1.print();

    std::cout << "Nu laver vi den anden del af opgaven :)" << std::endl;

    std::vector<Bloddonor> Register;

    Bloddonor donor4("Bo", 20, "A", false);
    
    Register.push_back(donor1);
    Register.push_back(donor2);
    Register.push_back(donor3);
    Register.push_back(donor4);
    
    for (Bloddonor donor : Register) {
        donor.print();
    }

    std::cout << "Nu sorterer vi dem" << std::endl;

    for (Bloddonor donor : Register) {
        if (donor.getBlodtype()=="A" and donor.getRhesustype()==false and donor.getBMI()>18.5 and donor.getBMI()<35) {
            donor.print();
        }
    }

}
