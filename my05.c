#include <stdio.h>

#define Line printf("---------------\n");

int main() {
    char Fullname[50];
    char Nickname[20];
    int Age;
    float Salary;

    Line;
   printf("     Your Information     \n");
   Line;
    printf("Enter your full name: ");
    scanf(" %[^\n]", &Fullname);
    printf("Enter your nickname: ");
    scanf(" %s", &Nickname);
    printf("Enter your age: ");
    scanf(" %d", &Age);
    printf("Enter your salary: ");
    scanf(" %f", &Salary);
    Line;
    printf("Full Name : %s\n", Fullname);
    printf("Nickname  : %s\n", Nickname);
    printf("Age       : %d years\n", Age);
    printf("Salary    : %.2f Baht\n", Salary);
    Line;

    return 0;
}