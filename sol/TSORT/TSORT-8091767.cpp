#include<bits/stdc++.h>
using namespace std;
int main()
{
long t,i;
//cin>>t;
scanf("%ld",&t);
long a[t];
for(i=0;i<t;i++)
   scanf("%ld",&a[i]);
sort(a,a+t);
for(i=0;i<t;i++)
   printf("%ld\n",a[i]);
return 0;
}