#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("Enter the length in centimeter:\n");
    scanf("%f",&cm);
    m=cm/100;
    printf("The converted length meter:%f\n",m);
    km=cm/100000;
    printf("The converted length kilometer:%f\n",km);


}
