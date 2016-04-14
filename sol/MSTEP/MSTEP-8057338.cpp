#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,i;
cin>>t;
    for(i=0;i<t;i++)
    {
    int n,j,k;
    cin>>n;
    long t=n*n;
    int x[t+1],y[t+1],p[n][n];
    long long s=0;
    x[0]=0,y[0]=0;
    for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++){
             cin>>p[i][j];
             x[p[i][j]]=j;
             y[p[i][j]]=k;
            }
        }

    for(j=1;j<t;j++){
        s+=abs(x[j+1]-x[j])+abs(y[j+1]-y[j]);
        //cout<<s<<endl;
    }
    cout<<s<<endl;
    }

return 0;
}