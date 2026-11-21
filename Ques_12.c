#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, j, min, x, y;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = abs(a[0] - a[1]);
    x = a[0];
    y = a[1];
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (abs(a[i] - a[j]) < min){
                min = abs(a[i] - a[j]);
                x = a[i];
                y = a[j];
            }
        }
    }
    printf("Closest pair: %d %d\n", x, y);
    printf("Minimum difference = %d", min);
    return 0;
}