#include <stdio.h>
#include <math.h>
int pro_dig(int num){
    int product = 1;
    while(num != 0)
    {
        product = product * (num % 10);
        num = num / 10;
    }
    return product;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", pro_dig(n));
}

