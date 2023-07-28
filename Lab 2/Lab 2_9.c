#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer number:");
    scanf("%d",&n);
    (n%2==0)? (printf("Even number is:%d\n",n)):(printf("Odd number is:%d\n",n));
}
