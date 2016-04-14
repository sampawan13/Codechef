#include<stdio.h>
int main()
{
int t,n;long long int c;
scanf("%d",&t);
while(t--)
	{
	 scanf("%d %lld",&n,&c);
	 int a[n],i,sum=0;
	 for(i=0;i<n;i++)
		{
		 scanf("%d",&a[i]);
		 sum+=a[i];
		}
         if(sum<=c)printf("Yes\n");
	 else printf("No\n");
        }
return 0;
}