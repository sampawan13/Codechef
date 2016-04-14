#include<iostream>
using namespace std;
 
int absolute(int a,int b)
{
    int c  = a-b;
    if(c>=0)
        return c;
    else
        return (-c);
}
int main()
{
    int t,n,mini;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        mini = absolute(s[0],s[1]);
        //cout<<mini<<endl;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            {   int temp = absolute(s[i],s[j]);
                if(temp<mini)
                {
                    mini = temp;
                }
            }
        cout<<mini<<endl;
    }
    return 0;
}