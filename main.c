//Program to print average of three numbers.

#include<stdio.h>

int main(){

int a,b,c,d=3,avg;
printf("enter the value for three numbers \n");
scanf("%d %d %d", &a , &b , &c);

avg = a+b+c;

printf("The Average of three numbers is  %d", avg/d);

return 0;
}

