#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,p,a,c=0;
scanf("%d%d",&n,&p);
    while(n--)
    {
      scanf("%d",&a);
       if(a>=p)
          c++;

    }
    printf("%d\n",c);
}
return 0;
}