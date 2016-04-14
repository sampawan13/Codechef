#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i=0,x,j;
cin>>n;x=n;
int a[n];
long s=0,m=0;
for(i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];
}
if((s%n)==0)
{
 for(j=0;j<x;j++)
 {
  if(a[j] < (s/n))
    m+=2*((s/n)-a[j]);
 }
 cout<<m<<endl;
}
else cout<<"-1"<<endl;
}
return 0;
}