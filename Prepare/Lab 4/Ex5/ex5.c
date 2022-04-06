#include<stdio.h>
#include<math.h>
int main(){
    int a[100];
    int n;
    scanf("%d", &n);
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for (int j = 0; j < n; j++){
        printf("%d\n", a[j]);
    }
    return 0;
}