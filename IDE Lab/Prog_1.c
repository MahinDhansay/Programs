//Program to find the sum of two integer values
#include<stdio.h>
int main(){
    int x, y;
    int tot = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    tot = x + y;
    printf("Sum of two intergers are: %d", tot);
    return 0;

}