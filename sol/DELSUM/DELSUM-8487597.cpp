#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
	while(t--)
	{
	  int n,d;
	  scanf("%d%d",&n,&d);
	  int a[n],s=0,i;
	  for(i=0;i<n;i++)
	  {
	    scanf("%d",&a[i]);
	    s+=a[i];
	  }
	  sort(a,a+n);
	  for(i=0;i<d;i++)
	  {
	   s-=a[n-1-i];
	  }
	  printf("%d\n",s);
	}
	return 0;
}