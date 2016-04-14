#include<stdio.h>
int main()
{
long t,i,m=0,b;
scanf("%ld",&t);
int a[1000001]={0};
for(i=0;i<t;i++){
   scanf("%ld",&b);
   if(b>m)
      m=b;
   a[b]++;
   }
for(i=0;i<=m;i++){

      while(a[i]!=0)
      {
        printf("%ld\n",i);
        a[i]--;
      }

}
return 0;
}