#include<stdio.h>
void main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d",i);
        i++;
    }
    scanf("%d",&n);
    do{
        printf("%d",i);
        i++;
    }
    while(i<=n);

}