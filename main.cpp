#include <iostream>
#include "logFunction.h"
using namespace std;

int main() {
    print("Hola Amigo estas bien !");
    createSineWaves(sineWave, 0);
    createSineWaves(shiftedSine, 0);
    corr(sineWave, shiftedSine);


    return 0;
}