#include<stdio.h>
int main (void){
    int age;
    int height;
    char grade;
    printf("Enter Age:\n");
    scanf("%d",&age);
    printf("Enter Height (in meters):\n");
    scanf("%d",&height);
    printf("Enter Grade:\n");
    scanf(" %c",&grade);
    printf("================================\n");
    printf("        User Information\n");
    printf("================================\n");
    printf("Age    = %10d\n",age);
    printf("Height = %10d\n",height);
    printf("Grage  = %10c\n",grade);
    printf("================================\n");
    return 0;
}