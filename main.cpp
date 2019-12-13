#include <iostream>
#include "logFunction.h"
#include <cstring>

using namespace std;
void increment(int* a) {
    (*a)++;
}
int main() {
    int a = 12;
    increment(&a);
    print(a);
    return 0;
}