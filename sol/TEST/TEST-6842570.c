#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(1)
{
    if(n!=42)
        {
        printf("%d \n",n);
        }
    else
        break;
    scanf("%d",&n);
}
}