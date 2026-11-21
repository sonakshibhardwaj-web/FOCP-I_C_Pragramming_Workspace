#include<stdio.h>

int main (void){
    int Student_ID = 96;
    int age = 18;
    int percentage = 98;
    char grade = 'A';
    printf("===============================\n");
    printf("      Student Information\n");
    printf("===============================\n");
    printf("      Student ID=  %10d\n", Student_ID);
    printf("        Age     =  %10d\n", age);
    printf("      Percentage= %10d%%\n", percentage);
    printf("       Grade    =  %10c\n",grade);
    printf("===============================\n");
    return 0;
}