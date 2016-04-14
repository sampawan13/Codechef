#include<stdio.h>
int getn()
	{
	int n=0;
	char ch=0;
	while(ch<33){
		ch = getchar();		
	}
	while(ch>33){
		n = n*10 + ch-'0';
		ch = getchar();		
	}
	return n;
}
int main()
{
	long int N;
	int x[3],y[3], count=0, a,b,c;
	N=getn();
	while(N--){
		x[0]=getn(); y[0]=getn(); x[1]=getn();
		y[1]=getn(); x[2]=getn(); y[2]=getn();
		a=(y[2]-y[1])*(y[2]-y[1])+(x[2]-x[1])*(x[2]-x[1]);
		b=(y[2]-y[0])*(y[2]-y[0])+(x[2]-x[0])*(x[2]-x[0]);
		c=(y[1]-y[0])*(y[1]-y[0])+(x[1]-x[0])*(x[1]-x[0]);
 
		if((a==b+c)||(b==a+c)||(c==b+a))
		count++;
	}
printf("%d\n",count);
return 0;	
	
}