#include "MineralSample.h"
#include "Samples.h"
void Samples::add_sample(double weight, double volume) {
    samples.push_back(MineralSample(weight,volume));
}
double Samples::relative_number_of_gold_samples() {
    if (samples.empty()) {
        return 0;
    } else {
        double goldSampleCount;
        for (MineralSample sample : samples) {
            if (sample.is_gold()) {
                goldSampleCount++;
            }
        }
        return goldSampleCount/samples.size();
    }
}
