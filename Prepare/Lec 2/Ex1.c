#include <stdio.h>
int main(){
    double a = 3.7;
    double r;
    printf("Enter a radius: ");
    scanf("%lf", &r);
    printf("Area of a circle with an input radius: %f\n", 3.14*r*r);
    printf("Circumference of a circle with an input radius: %f\n", 2*3.14*r);
    printf("Area of a circle with a preassigned radius: %f\n", 3.14*a*a);
    printf("Circumference of a circle with a preassigned radius: %f", 2*3.14*a);
}