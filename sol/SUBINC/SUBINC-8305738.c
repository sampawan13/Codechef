#include<stdio.h>
int main()
{
int t,i;
long long int a[100001]={0};
a[0]=0;
for(i=1;i<=100000;i++)
{
a[i]=a[i-1]+i;
}
scanf("%d",&t);
    while(t--)
    {
     int n,j=0,c=0,k=0;
     long long int x=0,b,s=0;
     scanf("%d",&n);
     for(j=0;j<n;j++)
     {
         scanf("%lld",&b);
         if(b>=x && j==n-1)
         {
          s+=a[c+1];k+=c+1;
         }
         else if(b>=x)
         {
          c++;
          x=b;
         }
         else
         {
          s+=a[c];k+=c;//printf("%lld ",s);
          c=1;
          x=b;
         }
     }
     printf("%lld\n",s+(n-k));
    }
return 0;
}