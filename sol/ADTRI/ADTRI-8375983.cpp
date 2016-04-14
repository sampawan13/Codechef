#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int w[5000001]={0};
int u[3]={5,13,17};
void mark(int w[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {   if(w[num]==0)
             w[ num ] = 1;
        ++i;
    }
}
void markMultiples(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
void  SieveOfEratosthenes(int n)
{    int c=0;

    if (n >= 2)
    {

        bool arr[n];
        memset(arr, 0, sizeof(arr));


        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {   if((i+1)%4==1)
                     {
                     w[i+1]=1;
                      if((i+1)>=20)
                         mark(w,i+1,n);
                     }
                markMultiples(arr, i+1, n);
            }
        }
    }
}
int main()
{
    int n = 5000000;
    SieveOfEratosthenes(n);
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int k,i=0,f=0,j=0;
      scanf("%d",&k);
      if(w[k]==1)
          printf("YES\n");
      else
      {
           for(j=0;j<3;j++)
          {

                if(k%u[j]==0)
                  {
                  printf("YES\n");
                  f=1;
                  break;}


          }

          if(f==0)
                printf("NO\n");
      }
    }
    return 0;
}