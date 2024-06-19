#include<stdio.h>
void main()
{
    int i=1,n,fact=1;
    printf("enter the value");
    scanf("%d",&n);
    if(n==0)
    {
        printf("factorial is 1");
    }
    else if(n>0){
        while(i<=n)
        {
            fact=fact*i;
            i++;
            printf("%d",fact);
        }
    }
    else{
        printf("invalid");
    }
    }