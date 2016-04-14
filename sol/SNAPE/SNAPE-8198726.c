#include<stdio.h>
#include<math.h>
int main()
{
int t,b,l;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&b,&l);
printf("%f %f\n",sqrt(l*l-b*b),sqrt(l*l+b*b));
}
return 0;
}