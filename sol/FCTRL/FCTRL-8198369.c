#include<stdio.h>
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{	int i=1,s=0;
	scanf("%d",&n);
	while(n/(5*i)!=0)
	{
	s+=n/(5*i);
	i=i*5;
	}
printf("%d\n",s);
}
return 0;
}