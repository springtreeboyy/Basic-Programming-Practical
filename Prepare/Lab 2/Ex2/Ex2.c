#include<stdio.h>
int main()
{
    const a = 1;
    const b = 2;
    const c = 1;
    double x;
    printf("Enter variable x: ");
    scanf("%lf", &x);
    printf("Value of the polyminal: %f", a*x*x + b*x + c);
}