#include<bits/stdc++.h>
using namespace std;
int main()
{
long t,i,m=0,b;
cin>>t;
int a[1000001]={0};
for(i=0;i<t;i++){
   cin>>b;
   if(b>m)
      m=b;
   a[b]++;
   }
for(i=0;i<=m;i++){

      while(a[i]!=0)
      {
        cout<<i<<endl;
        a[i]--;
      }

}
return 0;
}