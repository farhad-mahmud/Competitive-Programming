#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
                int x , n ; cin >> x >> n;

                vector<int >a(n) ;

                for(int i=0;i<n;i++){

                      cin >> a[i] ; 
                }

                set<int>light ;

                map<int,int> dis ;

                light.insert(0) ;
                light.insert(x) ;
                 
                dis[x] = 1 ;

                for(auto i : a){                                 

                     auto it = light.lower_bound(i) ;              

                     int right = *it ;
                     int left = *(--it) ;

                      int old_dis = right - left ;

                      if(--dis[old_dis] == 0){
                          dis.erase(old_dis) ;
                      }

                      dis[i-left]++ ;
                      dis[right - i]++ ;

                      light.insert(i) ;

                      cout << dis.rbegin()->first << ' ' ;
                }


   
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
