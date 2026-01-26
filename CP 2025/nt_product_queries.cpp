// NOT OPTIMIZED CODE ...

#include <bits/stdc++.h>
// #include "debug.hpp"
using namespace std;

#define de(...) cout << "[" << #__VA_ARGS__ << "]-> ", dbg(__VA_ARGS__)
#define Fast_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#ifndef ONLINE_JUDGE
#define File_IO freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#else
#define File_IO
#endif
#define int int64_t
#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
//const long double pi = acos(-1);

const int N = 3e5 ;
vector<vector<int>> divs(N + 1);

void div() {
    for(int i = 2; i <= N; i++) {
        for(int j = i; j <= N; j += i) {
            divs[j].push_back(i);
        }
    }
    for(int i = 1; i <= N; i++) {
        sort(divs[i].rbegin(), divs[i].rend());
    }
}

void testCase(){
    int n; cin >> n;
    vector<int> vi(n+1);
    for(int i = 1; i <= n; i++) cin >> vi[i];

    vector<int> hash(n+1, 0);
    for(int i = 1; i <= n; i++) {
        hash[vi[i]]++;
    }
    //de(hash);


    for(int i = 1; i <= n; i++) {
        //vector<int> div = divs[i];
        int cnt = 0;
        int num = i;
        //de(div);
        //cout << "num : " << num << nl ;
         if(num == 1 ) {
            if(hash[num] > 0){
                cout << 1 <<' ';
                
            }
            else {
                cout << -1 << ' ';
            }
             continue;

         }
         else{
              if(hash[num]>0){
                  cout << 1 << ' ' ;
                    continue ;
              }
            
         }

         bool done = false ;
         //cerr << i  << nl; 
        for(int x : divs[i]) {
    
            if(hash[x] > 0) {
                while(num % x == 0){
                      num =num/ x ;
                      cnt++ ;
                }
            }

            if(num == 1){
                  cout << cnt  << ' ' ;
                  done = true ;
                  break ;
            }          
        }
        if(!done) cout << -1 << ' ';

        //cout << nl ;
    
    }
    cout << nl;

}

signed main(){
    Fast_IO //File_IO
    int t=1;
    div();
    cin>>t;
    while(t--) testCase();
    return 0;
}

