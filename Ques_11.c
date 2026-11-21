#include <stdio.h>
int digitSum(int n){
    int sum = 0;
    if (n < 0)
        n = -n;
    while (n > 0){
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}
int main(){
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (digitSum(a[i]) == digitSum(a[j])){
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }
    return 0;
}