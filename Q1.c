//Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(){
int a,b, sum;
printf("enter a value for a: ");
scanf("%d", &a);
printf("enter a value for b: ");
scanf("%d", &b);

sum = a+b;
printf("the sum of %d and %d is %d.", a,b,sum);
return 0;

} 
