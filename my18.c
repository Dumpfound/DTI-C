#include <stdio.h>
double dti02( );

int dti01( ){
    return 555;
}

int main(){
    double xxx, yyy;
    printf("return if call function dti01 = %d\n", dti01( ));

    xxx = dti02( );

    printf("%lf\n", xxx + dti02());


    return 0;
}

double dti02( ){
    printf("Wow...\n");
    return 10 * 20.5;
}