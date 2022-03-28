#include<stdio.h>
#include<math.h>
void sum(int n){
    double s = 0;
    for (double i = 1; i <= n; i++){
        s = s + 1/i;
    }
    printf("%f", s);
}
int main(){
    int num;
    scanf("%d", &num);
    sum(num);
}