#include<stdio.h>
long long int rev(long long int n)
{
    int r;
    long long int rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    return rev;
}
long long int pal(long long int n)
{
    int i=0;
    while(n!=rev(n))
    {
        n+=rev(n);
        i++;
    }
    printf("%d",i);
    return n;
}

int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
      long long int n;

      scanf("%lld",&n);
      printf(" %lld\n",pal(n));
    }

return 0;
}