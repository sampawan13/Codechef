#include <stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
char a[11],b[11];int l,i;
scanf("%s",a);
scanf("%s",b);
l=strlen(a);
for(i=0;i<l;i++)
    {
     if(a[i]!=b[i])
          if(a[i]=='?'|| b[i]=='?');

          else       {printf("No\n"); break;}
    }
if(i==l)
   printf("Yes\n");
}
return 0;
}