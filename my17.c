#include <stdio.h>
#define senpa printf("**********************\n");

void dtio01(int x, double y){
    printf("X is %d\n", x);
    printf("Y is %lf\n", y);
    printf("Sum of x + y : %lf\n", x + y);
}

int main(){
    dtio01(10, 12.34);
    dtio01(12, 34.56);
    dtio02("John", 20);

    return 0;
}

void dtio02(char* name, int age){
    printf("Hi...%s\n", name);  
    printf("Your age is %d\n", age);
}