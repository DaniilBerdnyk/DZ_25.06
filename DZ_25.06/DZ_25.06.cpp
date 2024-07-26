#include "Cage.h"
#include "Fish.h"
#include "Bird.h"
#include "Mammal.h"
#include <iostream>

using namespace std;

int main() {
    try {
        Cage cage(1, 2);
        Fish fish("Nemo", false, true);
        Bird bird("Eagle", true, 60.0);
        cage.AddAnimal(&fish);
        cage.AddAnimal(&bird);
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
