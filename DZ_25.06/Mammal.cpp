#include "Mammal.h"
#include <iostream>

void Mammal::ShowDescription() {
    cout << "Mammal: " << name << ", Predator: " << isPredator << ", Habitat: " << habitat << std::endl;
}
