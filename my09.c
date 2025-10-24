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
    switch(bus_num) {
        case 57:
            printf("Go to Pinklao Bankhunnon\n");
            break;
        case 3:
            printf("Go to Sana Lung Ladporoao\n");
            break;
        case 71:
            printf("Go to Hua Lamphong Yaowarat\n");
            break;
        case 56:
            printf("Go to Bang Lamphu Saphan\n");
            break;
        case 539:
            printf("Go to Lotus Rama II\n");
            break;
        default:
            printf("Unknown Bus Number\n");
            break;
            senpa
    }
}