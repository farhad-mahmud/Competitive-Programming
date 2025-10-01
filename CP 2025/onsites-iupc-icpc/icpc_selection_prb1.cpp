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

const int N = 1e6 + 9;  

bool vis[N] ;    
vector<int> prime ;

void sieve(){

for(int i = 2; i * i < N; i++) {
    if(vis[i]) continue;

    for(int j = i * i; j < N; j += i){
        vis[j] = true;
    }
}

for(int i = 2; i < N; i++){
    if(!vis[i]) prime.push_back(i);
}

}

void solve ()
{


              //output(prime) ;

              int a , b ; cin >> a >> b ;

              map<int ,bool > x ;

              for(auto i : prime){               

                  if(a % i == 0){
                      x[i] = true ;
                   }
                  
                  while(a % i ==0){
                        a/= i ;
                  }

                   if(i*i > a) break ;
                                 
              }

              if(a>1)  {
               x[a] = true ;
            }

              bool f = true ;

              for(auto i : x){ // every prime of a , also a factor of b ? 

                   if(b % i.first != 0){

                        f= false ;
                        break ;
                   }
              }

              if(f){
               yes;
              }
              else {
                no ;
              }

}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;
         
         sieve() ;
         while(t--){

            solve() ;
        
        }


    return 0;
}
