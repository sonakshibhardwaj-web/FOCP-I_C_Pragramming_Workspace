#include<stdio.h>
int main (void){
    int i=0;
    int n;
    printf("Enter Number:\n");
    scanf("%d", &n);
    while(i<n){
    int j=0;
    while(j<n){
        printf("* ");
        j++;
    }
    printf("\n");
    i++;
    }
    return 0;
}
