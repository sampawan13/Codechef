#include <stdio.h>
#include <stdlib.h>
/*int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}*/

int main()
{
   int n,g,k;
    scanf("%d",&n);
    while(n--)
    {
     scanf("%d%d",&g,&k);
     int a[g],s=0,min=1000,i=0;

     for(i=0;i<g;i++)
         {
           scanf("%d",&a[i]);
           if(a[i]<min)
               min=a[i];
           s+=a[i];
         }
     //qsort(a, x, sizeof(long long int), cmpfunc);
     if((s-min)/k == s/k)
           printf("-1\n");
     else
           printf("%d\n",s/k);
    }
  return(0);
}