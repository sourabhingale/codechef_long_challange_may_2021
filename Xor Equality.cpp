#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll power (long long x, ll y,ll p)
{
    ll res=1;
    x=x%p;
    if(x==0)
    {
        return 0;
    }
    while (y>0)
    {
        if(y&1)
        {
            res=(res*x)%p;
        }
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll ans =power(2,n-1,mod);
	    cout<<ans<<endl;
	}
	return 0;
}
