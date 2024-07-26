#pragma once
#include "Animal.h"

using namespace std;

class Fish : public Animal {
public:
    bool isDeepSea;

    Fish(string n, bool p, bool d) : Animal(n, p), isDeepSea(d) {}

    void ShowDescription() override;
};
