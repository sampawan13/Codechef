#include <stdio.h>
int main()
{   int x;
    float y;
    scanf("%d%f",&x,&y);

    if(x%5!=0 || x>(y-0.5))
    {
        printf("%.2f",y);
    }
    else
    {
        printf("%.2f",(y-0.5)-x);
    }
 return 0;
}