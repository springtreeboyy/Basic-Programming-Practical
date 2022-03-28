#include<stdio.h>
#include<math.h>
void div_num(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
        printf("%d\n", i); 
    }
}
int main(){
    int num;
    scanf("%d", &num);
    div_num(num);
}