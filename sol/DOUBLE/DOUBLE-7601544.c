#include<stdio.h>
int main()
{ long int t; long long int n;
scanf("%ld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0) printf("%lld \n",n);
        else printf("%lld \n",n-1);

    }
return 0;

}