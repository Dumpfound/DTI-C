#include <stdio.h>

void funcA(int *a, int b, int *c){
    *a = 111;
    b = 222;
    *c = 333;
}

int main(){
    int x = 10, y = 20, z = 30;

    funcA(&x, y, &z);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    



    return 0;
}