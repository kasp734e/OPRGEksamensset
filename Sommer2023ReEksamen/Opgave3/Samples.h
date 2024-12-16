#include "MineralSample.h"
#include <vector>
class Samples {
  private:
  std::vector<MineralSample> samples;

  public:
  void add_sample(double weight, double volume);
  double relative_number_of_gold_samples();
};
