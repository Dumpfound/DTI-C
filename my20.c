#include <stdio.h>
#define senpa printf("**********************\n");

void showHeader( ){
    senpa;
    printf("  SUM & AVERAGE Number \n");
    senpa;
}

int calSum(int num1 , int num2, int num3){
    return num1 + num2 + num3;
}

double calAverage(int num1 , int num2, int num3){
    return (num1 + num2 + num3) / 30.0;
}

void showSum(int sum){
    printf("Sum is %d\n", sum);
}

void showAverage(double average){
    printf("Average is %lf\n", average);
}
void inputNumber(){
    int num1, num2, num3;
    printf("Enter number 1 : "); scanf("%d", &num1);
    printf("Enter number 2 : "); scanf("%d", &num2);
    printf("Enter number 3 : "); scanf("%d", &num3);
    int sum;
    double average;
    sum = calSum(num1, num2, num3);
    average = calAverage(num1, num2, num3);
    senpa;
    showSum(sum);
    showAverage(average);
    senpa;
}

int main(){


    return 0;
}