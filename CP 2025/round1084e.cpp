//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e7 + 9;
const int MOD = 1e9 + 7;

bool vis[N] ;
vector<int> prime ;

void sieve() {

    for (int i = 2; i * i < N; i++) {
        if (vis[i]) continue;

        for (int j = i * i; j < N; j += i) {
            vis[j] = true;
        }
    }
}
bool pf_sqr(int n){
     if(n<0) return false ;
     int r = sqrtl(n);
     return r*r == n || (r+1)*(r+1) == n; 
}
bool istwo(int n){
     return n > 0 && (n & (n-1))== 0;
}
bool semiprime(int n) {
    int count = 0;      
    int temp = n;

    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            temp /= i;
            count++;
            if (count > 2) return false; 
        }
    }
    if (temp > 1) count++;  

    return count == 2;   
}
void solve ()
{  
            int n;  cin >> n ;
            vector<int > a(n); for(int i=0;i<n;i++)cin>> a[i]; 

            vector<int > p;

            vector<int > q = a ;
            sort(all(q));
            if(a==q){
                 cout << "Bob" << nl;
                 return ;
            }
            for(int i=0;i<n;i++){
                 if(!vis[a[i]]){
                      p.push_back(a[i]) ;
                 }
            }

            vector<int > c= p;
            sort(all(c));
            //output(c) ;
            if(c!= p){
                 cout << "Alice" << nl;
                 return ;
            }   

            vector<int > nw ;
            for(int i=0;i<n;i++){
                if(!istwo(a[i]) && !pf_sqr(a[i])){
                      if(vis[a[i]]){
                       nw.push_back(a[i]) ;
                     }
                }
            }

            //output(nw);  
            bool f = true ;

            int sz = nw.size();
            for(int i=0;i<sz;i++){
                  if(semiprime(nw[i])){
                        f = false ;
                        break ;
                  }
            }


            if(f){
                cout << "Bob" << nl; 
            }
            else {
                cout << "Alice" << nl ;
            }
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   sieve();
   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
