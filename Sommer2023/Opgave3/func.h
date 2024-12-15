#pragma once

class Wire {
  private:
  double laength;
  double tvaersnitAreal;  
  double specifikModstand;
  // det er doubles fordi jeg tænker jeg skal bruge kommatal
  public:
  Wire(double specifikModstand, double laength, double tvaersnitAreal);
  double getModstand();
};