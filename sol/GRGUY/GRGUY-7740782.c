#include<stdio.h>
#include<string.h>
int main()
{
char s1[2000000],s2[2000000];
int t,i,j=-1,k=-1;
scanf("%d",&t);
while(t--)
{   int d=0,c=0;
    scanf("%s",s1);    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
        {   if(s1[i]=='#' && s2[i]=='#')
		{
		printf("No\n");c=-1;
		break;
		}
        }
        
         if(c!=-1)
          {   
              for(i=0;s1[i]!='\0';i++)
              {
		    if(s1[i]=='#')
		       { 
		        j=i;
		        break;
		       }
		    else if(s2[i]=='#')
		     {
		       k=i;
		       
		       break;
		     }
              }

              if(k>-1)
                {
		  for(i=0;s1[i]!='\0';i++)
		   {
                      if(s1[i]!=s1[i+1]) d+=1;
                   }
                   printf("Yes\n");
                   printf("%d\n",d-1);
                }
              else if(j>-1)
                {
		  for(i=0;s2[i]!='\0';i++)
		   {
                      if(s2[i]!=s2[i+1]) d+=1;
                   }
                   printf("Yes\n");
                   printf("%d\n",d-1);
                }
          }
}
return 0;
}