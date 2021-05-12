#include <iostream>
using namespace std;

int main() {
int t,x,a,b;
cin>>t;
while(t--)
{   
    cin>>x>>a>>b;
    int c=a+(100-x)*b;
    int s=c*10;
    cout<<s<<endl;
}
	return 0;
}
