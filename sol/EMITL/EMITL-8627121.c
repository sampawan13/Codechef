#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int l,i,a[5]={0};
      char s[101];
      scanf("%s",s);
      l=strlen(s);
      for(i=0;i<l;i++)
      {
         if(s[i]=='L')
            a[0]++;
         else if(s[i]=='T')
            a[1]++;
         else if(s[i]=='I')
            a[2]++;
         else if(s[i]=='M')
            a[3]++;
         else if(s[i]=='E')
            a[4]++;
      }
      if(l<9)
        printf("NO\n");
      else if(l==9)
      {
          if(a[0]==2 && a[1]==2 && a[2]==2 && a[3]==2 && a[4]==1)
            printf("YES\n");
          else
            printf("NO\n");
      }
      else
      {
          if(a[0]>=2 && a[1]>=2 && a[2]>=2 && a[3]>=2 && a[4]>=2)
            printf("YES\n");
          else
            printf("NO\n");

      }

    }
    return 0;
}