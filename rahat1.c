#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;

    printf("\nEnter 1st Number:");
    scanf("%d",&a);

    printf("\nEnter 2nd Number:");
    scanf("%d",&b);

    printf("\nEnter 3rd Number:");
    scanf("%d",&c);

    avg=(float) (a+b+c)/3;

    printf("\nAverage: %0.2f",avg);
    return 0;
}
