// Hele den her fil er skrevet af ai fordi jeg ikke magtede at lave test data.

#include <iostream>
#include "batch.h"
#include "led.h"

int main() {
    // Opret en batch
    Batch batch(1);
    std::cout << "Batch created with ID: 1\n";

    // Tilføj LED'er til batchen
    batch.addLed(101, 2.1, 0.02);
    batch.addLed(102, 2.0, 0.025);
    batch.addLed(103, 2.2, 0.018);
    std::cout << "Added LEDs to batch:\n";
    std::cout << "LED 101 (2.1V, 0.02A)\n";
    std::cout << "LED 102 (2.0V, 0.025A)\n";
    std::cout << "LED 103 (2.2V, 0.018A)\n";

    // Beregn og udskriv gennemsnitlig fremadspænding
    double avgVoltage = batch.averageForwardVoltage();
    std::cout << "Average Forward Voltage: " << avgVoltage << " V\n";

    // Beregn og udskriv standardafvigelsen
    double stdDev = batch.standardDeviationForwardVoltage();
    std::cout << "Standard Deviation of Forward Voltage: " << stdDev << " V\n";

    return 0;
}
