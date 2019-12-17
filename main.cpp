#include <iostream>
#include <cstring>
#include "logFunction.h"

typedef class Player {
public:
    int x, y;
    int speed;
    void moveXaYa(int xa, int ya){
        x = xa*speed;
        y = ya*speed;
    }
}player_t;

void do_reverse_string(void (*op) (char[]), char str[]) {
    op(str);
}
void reverse_string(char str[]) {
    int n = (int) strlen(str);
    for (int i = 0; i < n/2; ++i) {
        char k = str[i];
        str[i] = str[n-i-1];
        str[n-1-i] = k;
    }
}
int main() {
/*    player_t var{};
    var.speed = 3;
    var.moveXaYa(3, 2);
    print(var.x);
    print(var.y);*/
    char temp[] = "Hello World";
    printf("temp before reversing = %s\n", temp);
    do_reverse_string(reverse_string, temp);
    printf("temp = %s\n", temp);


    return 0;
}