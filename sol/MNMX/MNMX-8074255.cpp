#include<iostream>
using namespace std;
int main()
{
int t,a;
scanf("%d",&t);
    while(t--)
    { long long int min=1000000,y;
       int x,n;
       scanf("%d",&n);
       x=n;
       while(n--)
       {
          scanf("%d",&a);
          if(a<min)
               min=a;
       }
      
       y=(min*(x-1));
       printf("%lld\n",y);
    }
 
return 0;
}