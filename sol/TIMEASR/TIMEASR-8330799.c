#include<stdio.h>
#include<math.h>
#define p 0.00833333333
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
     double a,b,c,d;
     scanf("%lf",&a);
     int h,m;
     for(h=0;h<=11;h++)
     {  b=(double)h;
       for(m=0;m<=59;m++)
       {  c=(double)m;
          d=fabs(30*b-5.5*c);
          if(d>180)
             d=360-d;
          d=fabs(a-d);
          if(d<=p)
                {
                if(h<10 && m<10)
                    printf("0%d:0%d\n",h,m);
                else if(h<10 && m>=10)
                    printf("0%d:%d\n",h,m);
                else if(h>=10 && m<10)
                    printf("%d:0%d\n",h,m);
                else
                    printf("%d:%d\n",h,m);

                }
       }
     }

    }

return 0;
}