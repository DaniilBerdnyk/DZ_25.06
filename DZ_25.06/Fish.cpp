#include "Fish.h"
#include <iostream>

void Fish::ShowDescription() {
    cout << "Fish: " << name << ", Predator: " << isPredator << ", Deep Sea: " << isDeepSea << std::endl;
}
