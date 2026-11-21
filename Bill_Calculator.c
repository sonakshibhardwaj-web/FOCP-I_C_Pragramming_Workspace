#include<stdio.h>
int main (void){
    int price, quantity;
    printf("Price of one item = ");
    scanf("%d", &price);
    printf("Quantity purchased = ");
    scanf("%d", &quantity);

    printf("Total bill = %d", price*quantity);
    return 0;
}