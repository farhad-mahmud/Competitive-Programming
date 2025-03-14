#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ans = (-1+sqrt(1+8*n))/2; 
		cout<<ans<<endl;
	}
}