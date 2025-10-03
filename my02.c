//preprocessor directives
#include <stdio.h>
#include <math.h>

#define ShowPa printf("======================\n");

int number = 999;
void showHey() {
    printf("Hey there!\n");
}

int main() {
    ShowPa
    printf("%lf\n", pow(2, 20));
    ShowPa
    showHi();
    showHey();

    return 0;
}

void showHi() {
    printf("Hi there!\n");
}