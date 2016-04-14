#include<stdio.h>
int main()
{ int x,y,a;
scanf("%d %d",&x ,&y);
//a=x-y;
if((x-y)%10==0)printf("%d",x-y+1);
else if((x-y)%10==9)printf("%d",x-y-1);
else printf("%d",x-y+1);
return 0;

}