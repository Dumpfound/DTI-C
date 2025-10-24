#include <stdio.h>

#define senpa printf("**********************\n");

int main(){
    int number;
    
    senpa;
    printf("      Even or Odd      \n");
    senpa;

    while( 1 ){
        printf("Enter number: ");
        scanf(" %d", &number);
        if( number <= 0 ){
            senpa;
            break;
        }
        if( number % 2 == 0 ){
            printf(" is Even Number\n");
        } else {
            printf(" is Odd Number\n");
        }
    }
    return 0;
}