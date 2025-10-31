#include <stdio.h>
#include <string.h>

char* showWelcome(char* fname, char * lname);
int sumNumber(int n1, int n2){
    printf("N1 is %d\n", n1);
    printf("N2 is %d\n", n2);

    return n1 + n2;
}

int main(){
    printf("Sum of number is %d\n", sumNumber(10, 20));    
    printf("%s\n", showWelcome("Nin", "wow"));

    return 0;
}w

char* showWelcome(char* fname, char * lname){
    static char buf[256];
    if (!fname) fname = "";
    if (!lname) lname = "";
    snprintf(buf, sizeof(buf), "Welcome %s %s", fname, lname);
    return buf;
}