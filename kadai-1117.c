#include<stdio.h>
int main(void)
{
    printf("Welcome to C Programming!");

    int x,y,z;
    x=10;
    y=2*x;
    z=x+y;
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);

    int price=500;
    printf("%f\n",(float)price*1.1);
}