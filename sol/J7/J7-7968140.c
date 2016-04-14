#include<stdio.h>
#include<math.h>
int main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
    int p,s;
    float r,h,v;
    scanf("%d%d",&p,&s);
    r=sqrt ( (p*p) - (24*s));
    h= (p  - r)/12.0;
    v=((s * h)/2.0)-((p * h * h)/4.0)+ h*h*h;
    printf("%.2lf\n",v);
    }
return 0;
}