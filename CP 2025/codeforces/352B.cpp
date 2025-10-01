#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{
    int n; 
    cin >> n;

    vector<int> a(n + 1); 

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    } 

    map<int, vector<int>> pos;

    for (int i = 1; i <= n; i++) {
        pos[a[i]].push_back(i);
    }

    vector<pair<int, int>> ans;

    for (auto i : pos) {
        int x = i.first;
        vector<int> &indices = i.second; 

        if (indices.size() == 1) {
            ans.push_back({x, 0});
        } else {
            int d = indices[1] - indices[0];
            bool ok = true;
            for (int j = 2; j < indices.size(); j++) {
                if (indices[j] - indices[j - 1] != d) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans.push_back({x, d});
            }
        }
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << ' ' << ans[i].second << endl;
    }
}


                  



int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
