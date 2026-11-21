#include<stdio.h>
int main (void){
    int i=0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while(i<=n){
    int j=1;
    while(j<=i){
        printf("%d ", j);
        j++;
    }
    printf("\n");
    i++;
    }
    return 0;
}