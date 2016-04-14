#include<iostream>
#include<string.h>

using namespace std;
int main() {

	int T,l,i;
	cin>>T;
	while (T--) {
	int a[26]={0},b[26]={0};
		char c[1000];
		cin>>c;
        l=strlen(c);
        for(i=0;i<l/2;i++) a[c[i]-'a']++;
        if(l%2!=0)  for(i=l/2+1;i<l;i++) b[c[i]-'a']++;
        else        for(i=l/2;i<l;i++) b[c[i]-'a']++;

        for(i=0;i<25;i++){
           if(a[i]!=b[i])
              break;
        }

        if(i==25)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
        }
return 0;
}