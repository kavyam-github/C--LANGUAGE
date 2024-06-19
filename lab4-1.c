#include<stdio.h>
void main()
{
    int Hours,Seconds,Minutes;
    printf("enter the Second");
    scanf("%d",&Seconds);
    Hours=Seconds/3600;
    Seconds=Seconds%3600;
    Minutes=Seconds/60;
    Seconds=Seconds%60;
    printf("%d %d %d",Hours,Minutes,Seconds);
    
    }

