#include<stdio.h>
#include<math.h>
void har_ser(double n){
    double sum = 0;
    for (double i = 1; i <= n; i++){
        sum = sum + (1/i);
    }
    printf("%lf", &sum);
}
int main(){
    double num;
    scanf("%d", &num);
    har_ser(num);
}