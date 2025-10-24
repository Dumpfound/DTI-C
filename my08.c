#include <stdio.h>

#define senpa printf("**********************\n");

int main() {
    int bus_num;

    senpa
    printf("      Bus Number      \n");
    senpa
    printf("Enter your bus number: ");
    scanf(" %d", &bus_num);
    senpa
    if(bus_num == 57){
        printf("Go to Pinklao Bankhunnon\n");
    }else if(bus_num == 3){
        printf("Go to Sana Lung Ladporoao\n");
    }else if(bus_num == 71){
        printf("Go to Hua Lamphong Yaowarat\n");
    }else if(bus_num == 56){
        printf("Go to Bang Lamphu Saphan\n");
    }else if(bus_num == 539){
        printf("Go to Lotus Rama II\n");
    }else{
        printf("Unknown Bus Number\n");
    }
    senpa

    return 0;
}