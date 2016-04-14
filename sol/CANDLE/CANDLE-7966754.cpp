#include<iostream>
#include<cstdio>

using namespace std;

int a[10];


int main() {
	int T;
	scanf("%d",&T);
	while (T--) {
		for (int i=0;i<10;i++) scanf("%d",&a[i]);
		int mn=a[1],z=1;
		for (int i=2;i<10;i++)
			if (a[i]<mn) {
				mn=a[i];
				z=i;
			}
		if (a[0]<mn){
			mn=a[0];
			z=0;
		}
		if (z==0) {
			printf("1");
			for (int i=0;i<=mn;i++) printf("0");
		} else for (int i=0;i<=mn;i++)printf("%d",z);
		printf("\n");
	}

	return 0;
}