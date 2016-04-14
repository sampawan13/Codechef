#include <iostream>
#include <string>
//#include <vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b,v[20001]={0};
		cin>>n>>a;
		//vector<bool> v(20001,false);
		v[0]=1;
		for(int i=0;i<n;i++){
			cin>>b;
			for(int j=a;j>=0;j--){
				if(v[j])v[j+b]=1;
			}
		}
		if(v[a])cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}