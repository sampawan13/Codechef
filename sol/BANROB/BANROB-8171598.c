#include <stdio.h>
#include <math.h>
 
int main() {
	int t,m;
	double a=1000000000.0;
	double p,chef,opponent;
 
	scanf("%d",&t);
 
	while(t--) {
		scanf("%d %lf",&m,&p);
 
		if(m%2==0) {
			chef = a*((1-pow(p,m))/(1+p));
			opponent = a - chef;
		}
		else {
			chef = a*((1+pow(p,m))/(1+p));
			opponent = a - chef;
		}
		printf("%.2lf %.2lf\n",chef,opponent);
	}
	return 0;
}