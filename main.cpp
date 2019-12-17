#include <iostream>
#include "logFunction.h"

typedef struct Player {
    int x, y;
    int speed;
    void moveXaYa(int xa, int ya){
        x = xa*speed;
        y = ya*speed;
    }
}player_t;

int main() {

    player_t var{};
    var.speed = 3;
    var.moveXaYa(3, 2);
    print(var.x);
    print(var.y);



    return 0;
}