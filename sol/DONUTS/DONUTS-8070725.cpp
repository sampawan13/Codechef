#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t,i;
cin>>t;
    for(i=0;i<t;i++)
    {
     long long int n,s=0,c=0;
     int m,j,f;
     cin>>n>>m;
     int d[m],x=m-1,a[100001]={0};
     for(j=0;j<m;j++){
         cin>>d[j];
         a[d[j]]++;
         if(d[j]==1) c++;
     }
     if(c==m)
         cout<<m/2<<endl;
     else
     {
         for(j=0;j<m;j++)
             {
              if(a[j]>0)
              {
                 f=j;
                 if(f>=x)
                   {
                     break;
                   }
                 else if(t>0)
                   {
                     s+=f;
                     x=x-f-1;
                   }
                 a[j]--;
              }
             }
         cout<<x+s<<endl;
     }

    }

return 0;
}