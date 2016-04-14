#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    int n[a],i,min=101,s=0;
    for(i=0;i<a;i++)
        {
        cin>>n[i];
        if(n[i]<min)
             min=n[i];
        s+=n[i];
        }
    if((s-min)/b == s/b)
        cout<<-1<<endl;
    else
        cout<<s/b<<endl;
    }
return 0;
}