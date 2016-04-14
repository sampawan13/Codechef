#include<stdio.h>
int main()
{
int t,a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
scanf("%d",&t);
while(t--)
{
long int p,i,c=0;
scanf("%ld",&p);
for(i=11;i>=0;i--)
{
    if(p>=a[i]&& p!=0)
    {

      if(p/a[i]>1)
           c+=(p/a[i]);
      else
           c++;
      p=p-(p/a[i])*a[i];
      //printf("%ld\n",p);
    }
}
printf("%ld\n",c);
}
return 0;
}