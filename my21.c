#include <stdio.h>
#define senpa printf("**********************\n");

int main(){
    int dataA;
    int dataB[5];
    int dataC[] = {111, 222, 333};
    int dataD[3] [5];

    dataA = 20;
    dataB[2] = 999;

    printf("%d\n", dataC[0] + dataC[2]);;
    return 0;
}