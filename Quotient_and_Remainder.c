#include <stdio.h>
int main(void){
    int a,b;
    printf("Enter dividend:");
    scanf("%d",&a);
    printf("Enter divisor:");
    scanf("%d",&b);
    int quotient= a/b;
    int remainder= a%b;
    printf("%d\n",quotient);
    printf("%d",remainder);
    return 0;
}