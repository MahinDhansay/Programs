//Program to swap two numbers without using third variable
#include<stdio.h>
int main(){
    int a = 5, b = 4;

    printf("values before swapping: a = %d, b = %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValues after swapping: a = %d, b = %d", a, b);
    return 0;
}