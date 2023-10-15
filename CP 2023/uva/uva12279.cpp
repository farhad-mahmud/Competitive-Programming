#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,ar[100010],cas = 0;
	while(cin>>t){
	if(t==0)
		break;
	int zero = 0;
	for (int i = 0; i < t; ++i)
	{
		cin>>ar[i];
		if(ar[i]==0)
			zero++;
		/* code */
	}
	cout<<"Case "<<++cas<<": "<<(t-zero)-zero<<endl;
   }
}