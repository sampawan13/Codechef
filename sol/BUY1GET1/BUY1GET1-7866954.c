#include <stdio.h>
#include<string.h>
int main()
{   int t,i;
    
    scanf("%d",&t);
    while(t--)
    {   char c[201];
        scanf("%s",c);
        int x,j=0,a[60]={0},s=0;
        x=strlen(c);
        for(i=0;i<x;i++) 
	{
	    j=c[i]-'A';
	    a[j]++;
	}
        for(i=0;i<60;i++) 
	{
	   if(a[i]%2!=0) s+=(a[i]/2)+1; 
	   else s+=a[i]/2;
	}printf("%d\n",s);
    }
    return 0;
}