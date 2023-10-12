#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d,e,f,g,h,j;

	while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>j)
	{
		long long ar[100],sum=0,ar2[1000],bgc,bcg,cbg,cgb,gcb,gbc;
		
		ar[0] = a;
		ar[1] = b;
		ar[2] = c;
		ar[3] = d;
		ar[4] = e;
		ar[5] = f;
		ar[6] = g;
		ar[7] = h;
		ar[8] = j;
		sum = a+b+c+d+e+f+g+h+j;

		bgc = sum - ar[0] - ar[4] - ar[8];
		bcg = sum - ar[0] - ar[5] - ar[7];
		cbg = sum - ar[2] - ar[3] - ar[7];
		cgb = sum - ar[2] - ar[4] - ar[6];
		gbc = sum - ar[1] - ar[3] - ar[8];
		gcb = sum - ar[1] - ar[5] - ar[6];

		ar2[0] = bgc;
		ar2[1] = bcg;
		ar2[2] = cbg;
		ar2[3] = cgb;
		ar2[4] = gbc;
		ar2[5] = gcb;

		sort(ar2,ar2+6);

		
			if(ar2[0] == bcg)
				cout<<"BCG "<<bcg<<endl;
			else if(ar2[0] == bgc)
				cout<<"BGC "<<bgc<<endl;
			else if(ar2[0] == cbg)
				cout<<"CBG "<<cbg<<endl;
			else if(ar2[0] == cgb)
				cout<<"CGB "<<cgb<<endl;
			else if(ar2[0] == gbc)
				cout<<"GBC "<<gbc<<endl;
			else
				cout<<"GCB "<<gcb<<endl;
			/* code */

	}
}