#include "Bird.h"
#include <iostream>

void Bird::ShowDescription() {
    cout << "Bird: " << name << ", Predator: " << isPredator << ", Flight Speed: " << flightSpeed << std::endl;
}
