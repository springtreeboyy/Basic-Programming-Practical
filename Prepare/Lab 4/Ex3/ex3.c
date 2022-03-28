#include<stdio.h>
#include<math.h>
double sum(int n){
    double s = 0;
    for (double i = 1; i <= n; i++){
        s = s + 1/i;
    }
    return s;   
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%f",sum(n));
}