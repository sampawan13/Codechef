#include<stdio.h>
int main()
{ int t,i,c=0; char ch[100];
scanf("%d",&t);
while(t--)
{
   scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
        if(ch[i]=='A'|| ch[i]=='D'|| ch[i]=='O'|| ch[i]=='P'|| ch[i]=='Q'||ch[i]=='R') c++;
        else if(ch[i]=='B') c=c+2;

    printf("%d \n",c);c=0;
}

return 0;

}