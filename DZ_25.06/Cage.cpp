#include "Cage.h"
#include <iostream>

void Cage::AddAnimal(Animal* animal) {
    if (animals.size() >= maxAnimals) {
        throw "MaxCapacityException: The cage is full.";
    }
    for (Animal* a : animals) {
        if (a->isPredator != animal->isPredator) {
            throw "PredatorException: Cannot add predator and non-predator animals in the same cage.";
        }
    }
    animals.push_back(animal);
}

void Cage::DeleteAnimal(Animal* animal) {
    for (int i = 0; i < animals.size(); i++) {
        if (animals[i] == animal) {
            animals.erase(animals.begin() + i);
            return;
        }
    }
    throw "Animal not found in the cage.";
}

Animal* Cage::FindAnimal(std::string name) {
    for (Animal* a : animals) {
        if (a->name == name) {
            return a;
        }
    }
    return nullptr;
}
