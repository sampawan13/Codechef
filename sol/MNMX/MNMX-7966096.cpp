#include<iostream>
using namespace std;
int main()
{
int t,a;
cin>>t;
    while(t--)
    { long long int min=1000000,y;
       int x,n;
       cin>>n;
       x=n;
       while(n--)
       {
          cin>>a;
          if(a<min)
               min=a;
       }
      
       y=(min*(x-1));
       cout<<y<<endl;
    }

return 0;
}