#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	cin >> a >> b;
		ll total=0;
	while(a--)
	{
		ll x,y,z;
		cin >> x >> y >> z;
	
		ll ans=LLONG_MAX;
		if(x<=b)ans=min({ans,y,z});
		if(y<=b)ans=min({ans,x,z});
		if(z<=b)ans=min({ans,x,y});
		if(ans==LLONG_MAX)
		{
			cout << "impossible"<<endl;
			return 0;
		}
 
		total+=ans;


	}
	cout << total <<endl;
}