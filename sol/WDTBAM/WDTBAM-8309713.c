#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
     int n,i,c=0;
     scanf("%d",&n);
     long long int w[n+1],max=0;
     char s1[n+1],s2[n+1];
     scanf("%s%s",s1,s2);
     for(i=0;i<n;i++)
     {
       if(s1[i]==s2[i])
          c++;
     }

     for(i=0;i<n+1;i++)
     {
      scanf("%lld",&w[i]);
      if(w[i]>max && i<=c)
          max=w[i];
     }
     if(c==n)
       printf("%lld\n",w[n]);
     else
       printf("%lld\n",max);
    }

return 0;
}