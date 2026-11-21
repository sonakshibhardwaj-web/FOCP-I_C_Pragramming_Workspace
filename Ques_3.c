#include <stdio.h>
int area(int length, int breadth){
    return length * breadth;
}
int main(){
    int l, b, result;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    result = area(l, b);
    printf("Area of rectangle = %d", result);
    return 0;
}