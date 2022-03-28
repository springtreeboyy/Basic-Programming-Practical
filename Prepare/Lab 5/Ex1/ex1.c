#include <stdio.h>
#include <math.h>
int gcd_num(int a, int b){
    int greater, smaller;
    if (a != b){
      if(a < b){
       smaller = a;
      }
      else{
       smaller = b;
      }
      while(1){
          if (a % smaller == 0 && b % smaller == 0){
            break;
          }
          smaller -= 1;
      }
      return smaller;
    }
    else{
        return a; 
    }
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd_num(a, b));
}