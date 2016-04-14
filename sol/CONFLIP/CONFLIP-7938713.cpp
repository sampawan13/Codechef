#include<iostream>
using namespace std;
int main()
{
int t,g,i,q;
cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--)
        {
         long long int n;
         cin>>i>>n>>q;
         if(n%2==0)
             cout<<n/2;
         else if(i==q)
             cout<<n/2;
         else if(i!=q)
             cout<<n-n/2;
         cout<<endl;
        }
    }

return 0;
}