#include<stdio.h>
#include<math.h>
int main(){
    int a[1000], n, max, min;
    printf("How many numbers you want to enter? ");
    scanf("%d", &n);
    printf("Enter numbers: \n");
    for (int i=0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    min = max = a[0];
    for (int j = 1; j < n; j++)
    {
     if (min > a[j])
     min = a[j];
     if (max < a[j])
     max = a[j];
    }
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d", min);
}    