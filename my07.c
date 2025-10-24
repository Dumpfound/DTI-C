#include <stdio.h>

#define showPa printf("**********************\n");

int main() {
    char pro_id[5], pro_name[30];
    float pro_price, pro_sale;
    showPa
    printf("      Product Info      \n");
    showPa
    printf("Enter product ID: ");
    scanf(" %s", &pro_id);
    printf("Enter product name: ");
    scanf(" %s", &pro_name);
    printf("Enter product price: ");
    scanf(" %f", &pro_price);
    if( pro_price > 1000 ){
        pro_sale = pro_price - (pro_price * 3/100   );
    } else {
        pro_sale = pro_price - (pro_price * 5/100   );
    }
    printf("Product sale price: %.2f Baht\n", pro_sale);
    showPa

    return 0;
}