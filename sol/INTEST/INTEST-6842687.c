#include<stdio.h>
int main()
{
     int x,i,c=0;
    unsigned long long int y,n;
    scanf("%d %lld",&x,&y);
     for(i=0;i<x;i++)
     {
        scanf("%lld",&n);
        if(n%y==0)
            c++;
     }
    printf("%d",c);
    return 0;
}