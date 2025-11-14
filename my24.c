#include <stdio.h>
#define senpa printf("**********************\n");

int main(){
    int aa = 100;
    int bb[4] = {11, 22 ,33, 44};
    int *p_aa = &aa;
    int *p_bb = bb[0];
    int *p2_bb = bb;

    *p2_bb = 555;
    printf("%d\n", bb[0]);
    printf("%d\n", *p2_bb);
    printf("%d\n", *p_bb);
    senpa;
    printf("%p\n ", &aa);
    printf("%p\n", p_aa);
    printf("%d\n ", &aa);
    printf("%d\n", p_aa);
    senpa;
    printf("%d\n", aa);
    printf("%d\n", *p_aa);
    *p_aa = 999;
    senpa;
    printf("%d\n", aa);
    printf("%d\n", *p_aa);

    return 0;
}