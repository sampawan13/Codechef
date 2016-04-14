#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int b[n],c[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        c[b[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(c[i]!=1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}