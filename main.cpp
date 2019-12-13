#include <iostream>
#include "logFunction.h"
#include <cstring>

using namespace std;

int main() {
    char* buffer = new char[8];
    memset(buffer, 12, 8);
    char** ptr = &buffer;
    char*** ptr_ptr = &ptr;
    return 0;
}