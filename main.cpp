#include <iostream>
#include "logFunction.h"
#include <cstring>

using namespace std;
void increment(uint8_t * a) {
    (*a)++;
}
int main() {
    int a = sizeof(uint8_t);
//    increment(a);
    print(a.min());
    return 0;
}