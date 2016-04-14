#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i=0,j=0,n;
		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		qsort(a,n,sizeof(int),compare);
		qsort(b,n,sizeof(int),compare);
		int count=0;
		i=0;
		while(i<n && j<n)
		{
			if(a[i]<=b[j])
			{
				i++;
				j++;
				count++;
			}
			else
				j++;
		}
		printf("%d\n",count);
	}
	return 0;
}