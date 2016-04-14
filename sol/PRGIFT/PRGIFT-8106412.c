#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,k,i,a=0,c=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
   scanf("%d",&a);
   if(a%2==0)
       c++;
}
if(k==0 && c==n)
    printf("NO\n");
else if(c>=k)
    printf("YES\n");
else
    printf("NO\n");
}
return 0;
}