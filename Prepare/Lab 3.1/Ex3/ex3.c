#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c, d, e, f;
    printf("Enter a, b, c, d, e, f: \n");
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    double det, detx, dety;
    det = a*e - b*d;
    detx = e*c - b*f;
    dety = a*f - c*d;
    double x, y;
    x = detx / det;
    y = dety / det;
    printf("x is %f \n", x);
    printf("y is %f", y); 
}