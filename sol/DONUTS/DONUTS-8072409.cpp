#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
int main()
{
int t,i;
scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     long long int n,s=0,c=0;
     int m,j,f;
     scanf("%lld%d",&n,&m);
     int d[m],x=m-1;
     for(j=0;j<m;j++){
         scanf("%d",&d[j]);
         if(d[j]==1) c++;
     }
     if(c==m)
         printf("%d\n",m/2);
     else
     {
         //j=0;
         sort(d,d+m);
         for(j=0;j<m;j++)
             {
             if(d[j]>=x)
               {
                 break;
               }
             else if(t>0)
               {
                 s+=d[j];
                 x=x-d[j]-1;
               }
             }
         printf("%lld\n",s+x);
     }

    }

return 0;
}