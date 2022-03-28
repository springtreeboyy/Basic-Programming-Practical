#include<math.h>
#include<stdio.h>
int main() {
    double a, b, c;
    printf("Enter 3 variables a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("3a - b^3 - 2sqrt(c) = %f", 3 * a - b*b*b - 2*sqrt(c));
}