#pragma once
#include "Animal.h"

using namespace std;
class Bird : public Animal {
public:
    double flightSpeed;

    Bird(string n, bool p, double f) : Animal(n, p), flightSpeed(f) {}

    void ShowDescription() override;
};
