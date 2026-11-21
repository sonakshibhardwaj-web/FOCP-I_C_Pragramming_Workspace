#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    if (x < 0){
        y = x * x + 2;
    }
    else{
        y = 2 * x + 3;
    }
    printf("Value of y = %d", y);
    return 0;
}