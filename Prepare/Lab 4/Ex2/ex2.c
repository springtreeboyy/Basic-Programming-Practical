#include<stdio.h>
#include<math.h>
void prime_num(int num){
    for (int i = 2; i <= num; i++){
        int count = 0;
        for(int j = 2; j < i; j++){
           if (i % j == 0)
           count++;
           break;
        }
        if (count == 0)
        printf("%d\n", i); 
    }
}
int main(){
    int n;
    scanf("%d", &n);
    prime_num(n);
}