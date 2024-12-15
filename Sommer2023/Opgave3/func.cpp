  #include "func.h"
  Wire::Wire(double specifikModstand, double laength, double tvaersnitAreal) {
      if (specifikModstand > 0) {
          this -> specifikModstand = specifikModstand;
      } else if (specifikModstand <= 0) {
          this -> specifikModstand = 0;
      }

      if (laength > 0) {
          this -> laength =laength;
      } else if (laength <= 0) {
          this -> laength = 0;
      }

      if (tvaersnitAreal > 0) {
          this -> tvaersnitAreal = tvaersnitAreal;
      } else if (tvaersnitAreal <= 0) {
          this -> tvaersnitAreal = 0;
      }

  }
  double Wire::getModstand() {
      if (specifikModstand == 0 or laength == 0 or tvaersnitAreal == 0) {
          return 0;
      } else {
          return (specifikModstand*laength)/tvaersnitAreal;
      }

  }
