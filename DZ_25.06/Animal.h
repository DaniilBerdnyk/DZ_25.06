#pragma once
#include <string>

using namespace std;

class Animal {
public:
    string name;
    bool isPredator;

    Animal(std::string n, bool p) : name(n), isPredator(p) {}

    virtual void ShowDescription() = 0;
};
