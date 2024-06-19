#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("sum%d",sum);

}