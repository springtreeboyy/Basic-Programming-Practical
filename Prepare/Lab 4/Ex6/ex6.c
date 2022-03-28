#include<stdio.h>
#include<math.h>
int factorial(int n){
    int product = 1;
    for (int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d",factorial(n));
}