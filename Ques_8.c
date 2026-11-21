#include <stdio.h>
int main(){
    int n, target, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] + a[j] == target)
            {
                count++;
            }
        }
    }
    printf("Number of pairs = %d", count);
    return 0;
}