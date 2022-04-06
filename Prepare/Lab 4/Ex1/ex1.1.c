#include<stdio.h>
#include<math.h>
int main()
{
    int natural_number;
    printf("The natural number is ");
    scanf("%d",&natural_number);
    printf("The divisors of the number are \n ");
    for (int i = natural_number;i>0;i=i-1)
    {
        if (natural_number%i==0)
        {
            printf("%d\n",i);
        }
    }
}