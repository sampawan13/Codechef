#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
     int n,i,max=0;
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
       if(max<a[i])
             max=a[i];
     }
     long long int c=0;
     for(i=0;i<n;i++)
     {
       c+=max-a[i];
     }
     printf("%lld\n",c);
    }
return 0;
}