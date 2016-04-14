#include<stdio.h>
int main()
{
    int t,a,b,n;
    scanf("%d",&t);
    while(t--)
    {
        n=0;
        scanf("%d%d",&a,&b);
        while(a & (a-1))
        {
            n=n+1;
            a=a/2;
        }
        if (a<b)
        {
            while(a!=b)
            {
            n=n+1;
            a=a*2;
            }
        }
        else
        {
            while(a!=b)
            {
            n=n+1;
            a=a/2;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}