#include<iostream>
using namespace std;
int main()
{
long long int t,n;
cin>>t;
	while(t--)
	{
	
	cin>>n;
	
	n=n+(n*(n+1))/2;
	cout<<n<<endl;
	}
return 0;
}