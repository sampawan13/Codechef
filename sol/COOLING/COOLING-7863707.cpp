#include<stdio.h>
void swap(int w[],int j)
  {
                int temp;               
                temp=w[j];
                w[j]=w[j+1];
                w[j+1]=temp;
  }             
int main()
 {
   int t,p,wp[101],wr[101],i,j,mp;
   scanf("%d",&t);
   while(t--)
    {
      mp=0;
      scanf("%d",&p);
      for(i=0;i<p;i++)
       scanf("%d",&wp[i]);
      for(i=0;i<p;i++)
       scanf("%d",&wr[i]);
      for(i=0;i<p-1;i++)
       for(j=0;j<p-i-1;j++)
         {
          if(wp[j]>wp[j+1])                    
            swap(wp,j);     
          if(wr[j]>wr[j+1])
            swap(wr,j);       
          } 
       for(i=0,j=0;j<p;i++)
          { 
           while(wp[i]>wr[j]&&j<p)
               j++;
           if(j++!=p) 
            mp++;
           }          
       printf("%d\n",mp);
    }
      return 0;
}