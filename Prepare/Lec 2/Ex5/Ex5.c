#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    int n = a;
    a = b;
    b = n;
    printf("a = %d, b = %d", a, b);
    return 0;
}