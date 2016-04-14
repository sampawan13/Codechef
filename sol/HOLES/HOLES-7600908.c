#include <stdio.h>
int main()
{
	int t,c=0,i;
	char str[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
			if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R') c++;
			else if(str[i]=='B') c+=2;
			printf("%d\n",c);
			c=0;
	}
	return 0;
}