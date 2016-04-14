#include <stdio.h>
int w[5000001]={0};
int n = 5000000;
int x[5000000]={0};
int u[174193];
void mark(int w[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        w[ num ] = 1;
        ++i;
    }
}
void markMultiples(int x[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        x[ num-1 ] = 1;
        ++i;
    }
}
void  SieveOfEratosthenes(int n)
{    int c=0,i;

    if (n >= 2)
    {
      for ( i=1; i<n; ++i)
        {
            if ( x[i] == 0 )
            {   if((i+1)%4==1)
                     {
                     w[i+1]=1;u[c++]=i+1;
                     if((i+1)>=20)
                         mark(w,i+1,n);
                     }
                markMultiples(x, i+1, n);
            }
        }
    }
}
int main()
{

    SieveOfEratosthenes(n);
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int i=0,f=0,j;
      int k;
      scanf("%d",&k);
      if(w[k]==1)
          printf("YES\n");

      else if(k<=1000000)
      {
          while(u[i]<k)
          {
           if(k%u[i]==0)
              {printf("YES\n");f=1;break;}
           i++;
          }

          if(f==0)
                printf("NO\n");
      }
      else
      {
           for(j=0;j<3;j++)
          {

               if(k%u[j]==0)
                  {printf("YES\n");f=1;break;}


          }

          if(f==0)
                printf("NO\n");
      }
    }
    return 0;
}