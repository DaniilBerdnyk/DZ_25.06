#pragma once
#include "Animal.h"

using namespace std;

class Mammal : public Animal {
public:
    string habitat;

    Mammal(std::string n, bool p, std::string h) : Animal(n, p), habitat(h) {}

    void ShowDescription() override;
};
