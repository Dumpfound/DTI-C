#include <stdio.h>

int main() {
    char name[50];
    float money, interest;

    printf("------------------------------------------------\n");
    printf("            Calculate Loan Interest\n");
    printf("------------------------------------------------\n");

    printf("Enter name : ");
    scanf("%s", name);

    printf("Enter money : ");
    scanf("%f", &money);

    if (money >= 1000)
        interest = money * 0.025;
    else
        interest = money * 0.055;

    printf("------------------------------------------------\n");
    printf("Loan interest is : %.2f\n", interest);
    printf("------------------------------------------------\n");

    return 0;
}
