#include<stdio.h>
void main()
{
    int n,i=1,multi=1;
    printf("enter the number for multiplication");
    scanf("%d",&n);
    while(i<=10)
    {
      multi=n*i;
      i++;
      printf("%d\n",multi);
    }
}
   