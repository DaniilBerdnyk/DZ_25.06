#pragma once
#include <vector>
#include "Animal.h"

using namespace std;

class Cage {
public:
    int number;
    int maxAnimals;
    vector<Animal*> animals;

    Cage(int n, int m) : number(n), maxAnimals(m) {}

    void AddAnimal(Animal* animal);
    void DeleteAnimal(Animal* animal);
    Animal* FindAnimal(std::string name);
};
