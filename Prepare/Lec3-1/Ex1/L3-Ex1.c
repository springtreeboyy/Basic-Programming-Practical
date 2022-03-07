#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
      printf("The maximum number is %d.\n", a);
    else if (b > a && b > c)
      printf("The maximum number is %d.\n", b);
    else
      printf("The maximum number is %d.\n", c);

    if (a < b && a < c)
      printf("The minimum number is %d.", a);
    else if (b < a &&  b < c)
      printf("The minimum number is %d.", b);
    else
      printf("The minimum number is %d.", c);

    return 0;
}    