#include<bits/stdc++.h>
using namespace std;
int a[5000000+2]={0},b[5000000+2];
int main()
{
    int t,i,n;
	//cin>>t;
	scanf("%d",&t);
    int j,k;
	b[5]=b[13]=b[17]=1;
	for(i=2;i<5000001;i++)
	{
	    if(a[i]==0)
	    {
	    if(i%4==1 && i>=20)
	    {
	    	for(k=1;k*i<5000001;k++)
	    	{
	    		b[i*k]=1;
	    	}
	    }
		for(k=1;i*k<5000001;k++)
		{
			a[i*k]=1;
		}
	    }
	}
	while(t--)
	{
		//cin>>n;
		scanf("%d",&n);
		if(b[n]==1 || (n%5==0 || n%13==0 || n%17==0))
		//cout<<"YES"<<endl;
		        printf("YES\n");
		else
		//cout<<"NO"<<endl;
		         printf("NO\n");
	}
	return 0;
}