#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
char c[1001];
int l=0,s=0,i;
scanf("%s",&c);
l=strlen(c);
for(i=0;i<l;i++)
    {
      s+=(c[i]-'a')+1;
    }
printf("%d\n",s);
}
return 0;
}