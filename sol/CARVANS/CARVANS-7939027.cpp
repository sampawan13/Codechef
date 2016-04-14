#include<iostream>
using namespace std;
int main()
{
int t,g;
cin>>t;
    while(t--)
    {
        cin>>g;
        int a[g],i=0,x=g,s=1;
        while(g--)
        {
         cin>>a[i++];
        }
        for(i=1;i<x;i++)
         {
           if(a[i]<a[0])
             {
                s++;
                a[0]=a[i];
             }
         }
        cout<<s<<endl;
    }

return 0;
}