#include<bits/stdc++.h>
using namespace std;
int main()
{
long t,i;
cin>>t;
long a[t];
for(i=0;i<t;i++)
   cin>>a[i];
sort(a,a+t);
for(i=0;i<t;i++)
   cout<<a[i]<<endl;
return 0;
}