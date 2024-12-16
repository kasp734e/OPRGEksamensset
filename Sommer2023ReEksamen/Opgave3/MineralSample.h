#pragma once

class MineralSample {
  private:
  double weight;
  double volume;
  // de er doubles så jeg kan bruge kommatal  
  public:
  MineralSample(double weight, double volume);
  bool is_gold();
  bool is_silver();
  // de er bools da det enter er sandt eller falsk
  
};