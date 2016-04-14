#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {         long long int m,i,max1,min,p1=-1,p2=-1,y1=0,c1=0,c2=0,y2=0,flag=0;
              max1=INT_MIN,min=INT_MAX;
              scanf("%lld",&m);
              if(m<=8)
                   max1=-50,min=50;
              long long int x[m+1],y[m+1];
              for(i=0;i<m;i++)
              scanf("%lld %lld",&x[i],&y[i]);
 
              for(i=0;i<m;i++)
              {
 
                              if(x[i]>=max1)
                              {
                                           // printf("control reaches here");
                                            if(x[i]==max1)
                                            {
                                                          if(y[i]>y[p1])
                                                          {
                                                                       // printf("here it is");
                                                                        max1=x[i];
                                                                        p1=i;
                                                          }
                                            }
                                            else
                                            {max1=x[i];
                                            p1=i;
                                            }
                              }
                              if(x[i]<=min)
                              {
                                           if(x[i]==min)
                                           {
                                                        if(y[i]<y[p1])
                                                        {
                                                                      min=x[i];
                                                                      p2=i;
                                                        }
                                           }
                                          else
                                          {min=x[i];
                                          p2=i;
                                          }
                              }
              }
               
               if(y[p1]>=y[p2])
               {y1=p1;
               y2=p2;
               flag=0;}
               else
               {y1=p2;y2=p1;
               flag=1;}
              
                        for(i=0;i<m;i++)
                        {
                                        if(y[i]<=y[y1])
                                        c1++;
 
 
                        }
                        for(i=0;i<m;i++)
                        {
                                        if(y[i]>=y[y2])
                                        c2++;
                        }
             
               if(c1==m)
               {
                       if(flag==0)
                       {
                       printf("1\n");
                       printf("%lld SW\n",y1+1);
                       }
                       else if(flag==1)
                       {
                            printf("1\n");
                            printf("%lld SE\n",y1+1);
                       }
 
               }
               else if(c2==m)
               {
                    
                    if(flag==0)
                    {
                              printf("1\n");
                              printf("%lld NE\n",y2+1);
                    }
                    else if(flag==1)
                    {
                         printf("1\n");
                         printf("%lld NW\n",y2+1);
                    }
               }
 
               else
               {
                   if(flag==0)
                   {
                   printf("2\n");
                   printf("%lld NE\n",y2+1);
                   printf("%lld SW\n",y1+1);
                   }
                   else if(flag==1)
                   {
                        printf("2\n");
                        printf("%lld NW\n",y2+1);
                        printf("%lld SE\n",y1+1);
                   }
               }
 
 
    }
    return 0;
}