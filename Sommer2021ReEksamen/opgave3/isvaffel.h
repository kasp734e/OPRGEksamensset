#pragma once

class isvaffel {

    private:
    int antalKugler_;
    int antalExtras_;

    public:
    isvaffel();
    isvaffel(int antalKugler, int antalExtras);
    void print();
    double beregnPris();
    bool tilfoejKugle();
    bool tilfoejExtra();
    int getAntalKugler();
    int getAntalExtras();


};
