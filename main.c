#include<stdio.h>

void swap(int , int);
void main()
{

int a =5 , b=6;
printf("%d %d",  a,b);
swap(a,b);

printf("After swapping\n");
printf("%d %d", a, b);

}

void swap(int x, int y){

int t;
t=x;
x=y;
y=t;
printf("After swapping");
printf("%d %d", x , y);
}
