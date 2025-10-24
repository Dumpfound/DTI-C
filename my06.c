#include <stdio.h> 
#define senpa printf("---------------\n");  

int main() {
    int number;

    senpa
    printf("      Lucky Number      \n");
    senpa
    printf("Enter your lucky number: ");
    scanf(" %d", &number);
    senpa
    if( number ==  13 ){
        printf("Wow! You got Lucky Number 13!\n");
    }
    senpa
    
    return 0;
}