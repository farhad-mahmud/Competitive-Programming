#include <bits/stdc++.h>
using namespace std;

#define int long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


int count_on_bits(int x) {

    int cnt = 0;

    for (int k = 0; k < 64; k++) {

        if ((x >> k) & 1)

            cnt++;
    }
    return cnt;
}
int get_max_good(int a, int k, int &i_k) {

    int max_good = count_on_bits(a);

    int cost = 0;

    for (int bit = 0; bit < 64; ++bit) {
        int x = (a | ((1LL << bit) - 1));
        cost = x - a;

        if (cost <= k) {
            int b = count_on_bits(x);
            if (b > max_good) {
                max_good = b;
                i_k = cost;  
            }
        }
    }

    return max_good;
}



void solve ()
{
      
                int  n , k ; cin >> n >> k ;

                vector<int > a(n+1) ;

                vector<int > good(n+1) ;

                int  good_sum = 0 ;
                

                for(int i=1 ;i<=n;i++){ 
                      
                      cin >> a[i] ;

               }


               if(n==1 || k >1e6){

                     int i_k = 0 ;

                     int max_good = get_max_good(a[1], k , i_k) ;

                     cout << max_good << nl ;
                     return ;
               }
                    

              for(int i =1 ;i<=n;i++){

                      good[i] = count_on_bits(a[i]) ;

                      good_sum += good[i] ;
              }

               priority_queue<pair<int ,int>> pq; 



               for(int i=1 ;i<=n;i++){

                     int cur = a[i] ;

                     int g = count_on_bits(cur+1) - count_on_bits(cur) ;

                     pq.push({g,i}) ;

               }


               while(k-- && !pq.empty()){

                    pair<int, int> top = pq.top(); pq.pop();

                    int g = top.first;
                    int i = top.second;

                    if(g <= 0){

                        break ;
                    }

                     a[i] += 1 ;

                     int new_good = count_on_bits(a[i]) ;

                     good_sum += new_good - good[i] ;

                     good[i] = new_good ;


                     int nxt_g = count_on_bits(a[i] +1) - count_on_bits(a[i]) ;

                     pq.push({nxt_g , i}) ;

               }
 

          cout << good_sum << endl; 
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
