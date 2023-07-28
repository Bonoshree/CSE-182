#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer:\n");
    scanf("%d",&number);
    if(number<0){
        printf("The number is negative.");
    }
    else if(number>0){
        printf("The number is positive.");
    }
    else{
        printf("The number is zero");
    }
    return 0;
}
