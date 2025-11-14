#include <stdio.h>

#define senpa printf("**********************\n");
#define EMP_NUM 5

int main(){
    double emp_sale[EMP_NUM], sum = 0;

    senpa;
    printf("     Average SALAES     \n"); 
    senpa;
    for(int x = 0 ; x < 5; x++){
    printf("Employee N0.%d/Sale is: ", x + 1);
    scanf("%lf", &emp_sale[x]);
    }
    senpa
    for (int x = 0 ; x < 5; x++){
        sum = sum + emp_sale[x];
    }
    printf("Avarage is %.2lf\n", sum / EMP_NUM);
    senpa;
    return 0;
}
