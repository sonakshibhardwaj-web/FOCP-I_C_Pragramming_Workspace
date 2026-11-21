#include <stdio.h>
int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int n, x, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++){
        if (gcd(a[i], x) == 1){
            count++;
        }
    }
    printf("Count = %d", count);
    return 0;
}