#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define  all(x)  x.begin(),x.end() ;
const ll MOD = 1e9 + 7;

void solve ()
{
        
       
        int n,m,i,j,k,sum=0,ans=0,f=0;

        cin>>n;

        int a[n+5];
        int zero=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                zero++;
        }
        if(!zero)
        {
            cout<<1<<endl<<1<<" "<<n<<endl;
             
             return ;
        }
        vector<pair<int,int>>v;
        if(a[1]==0 or a[2]==0)
        {
            ans++;
            v.push_back({1,2});
        }
        for(i=3;i<=n;i++)
        {
            if(a[i]==0)
                f=1;
        }
        if(f)
        {
            if(ans)
            {
                v.push_back({2,n-1});
                v.push_back({1,2});
            }
            else
            {
                v.push_back({3,n});
                v.push_back({1,3});
            }
        }
        else
        {
            if(ans)
            {
                v.push_back({1,n-1});
            }
            
        }
        cout<<v.size()<<endl;
        for(auto i : v)
        {
            cout<< i.first <<" "<< i.second <<endl;
        }
        
    
        
}




int32_t main() {
  FAST_IO

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
