#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
	while(t--)
	{ 
        int n,m,b,c=0,i;
	scanf("%d%d",&n,&m);
	int a[n];for(i=0;i<n;i++)a[i]=1;
		while(m--)
		{
		scanf("%d",&b);
		a[b-1]=0;
	 	}
		for(i=0;i<n;i++)
		{
		  if(a[i]==1&&c==0)
		   {
		    a[i]=0;printf("%d ",i+1);c=1;
		   }
                  else if(a[i]==1&&c==1)
		    c=0;
		}printf("\n");
                for(i=0;i<n;i++)
		{
		  if(a[i]==1)
		     printf("%d ",i+1);
		}printf("\n");
	
	}
return 0;
}