#include<stdio.h>
int main()
{
    int ndays,years,months,weeks,days;
    printf("Enter the number of days:");
    scanf("%d",&ndays);
    years=ndays/365;
    months=(ndays-years*365)/30;
    weeks=(ndays-months*30-years*365)/7;
    days=(ndays-weeks*7-months*30-years*365);
    printf("Years:%d\n",years);
    printf("Months:%d\n",months);
    printf("Weeks:%d\n",weeks);
    printf("Days:%d\n",days);

}
