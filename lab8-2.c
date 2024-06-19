#include<stdio.h>
void main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            printf("%d\nodd number",i);
        }
        i++;
    }
    do{
        if(i%2!=0){
            printf("%d\nodd number",i);
        }
        i++;
    }
    while(i<=n);

}