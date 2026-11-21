#include<stdio.h>
int main (void){
    int a,b;
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("%d, %d\n", a,b);
    int c=a;
    a=b;
    b=c;
    printf("%d, %d",a,b);
    return 0;
}