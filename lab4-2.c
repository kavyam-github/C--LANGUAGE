#include<stdio.h>
 void main()
 {
    int days,week,years;
    printf("enter the number of days");
    scanf("%d",&days);
    years=days/365;
    week=days/7;
    days=days;
    printf("%d %d %d",years,week,days);
 }