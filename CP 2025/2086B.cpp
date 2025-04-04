#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

int find(int l,int r,int x,int sum){
        int ans =-1;
        while(l<=r){
                int mid = l + (r-l) / 2;
                if(mid >= (x+sum-1)/sum){
                        ans = mid;
                        r = mid-1;
                }
                else l = mid+1;
        }
        return ans;
}
void solve ()
{
        
     
             int n;cin>>n;
             int k;cin>>k;
             int x;cin>>x;
             int sum = 0;

            vector<int>arr(n);

        for(int &i:arr){
                cin>>i;
                sum+=i;
        }

        int ans =0,curr=sum;

        for(int i=0;i<n;i++){

                if(curr>=x) ans += k;

                else {
                        int can = find(1,k-1,x-curr,sum);
                        if(can!=-1) ans += k - can;
                }

                curr -= arr[i];
        }

        cout<<ans<< endl; 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
