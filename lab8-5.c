#include<stdio.h>
void main()
{
    int i=1,n,oddcount=0,evencount=0;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0)
        {
            evencount+=1;
            i++;
        }
        else{
          oddcount+=1;
          i++;
        }
    }
    printf("%d %d",oddcount,evencount);
}