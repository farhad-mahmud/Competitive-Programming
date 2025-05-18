#include <bits/stdc++.h>

using namespace std;

#define int  long long

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
            int n ; cin >> n ;

            vector<int> a(n) ;

            for(int i=0;i<n;i++){

                    cin >> a[i] ;
            }

           
            int cnt = 0;
            int cnt2 = 0 ;

           vector<int > v ;
           
            vector<int > k = a;

            vector<int > v2 ;

            reverse(a.begin(),a.end()) ;

            for(int i=0;i<n-1;i++){

                   if(a[i] < a[i+1]){

                        v2.push_back(a[i]);
                   }
                   else if(a[i] > a[i+1]){

                            v2.push_back(a[i]) ;

                            a[i+1] = a[i] + 1;

                     }
                     else if(a[i] == a[i+1]){

                           v2.push_back(a[i]) ;

                     }
            }
 
            sort(v2.begin(),v2.end()) ;

            auto it1 = unique(v2.begin(),v2.end()) ;

             v2.erase(it1 ,v2.end());

             int sz1 = v2.size() ;


            for(int i = 0;i<n-1 ;i++){

                
                     if(a[i] < a[i+1]){

                            v.push_back(a[i]) ;
                     }

                     else if(a[i] > a[i+1]){

                            v.push_back(a[i]) ;

                            a[i+1] = a[i] + 1;

                     }
                     else if(a[i] == a[i+1]){

                           v.push_back(a[i]) ;

                     }

                  
                 }


                 

                 sort(v.begin(),v.end()) ;

                 auto it = unique(v.begin(),v.end()) ;

                 v.erase(it , v.end()) ;

                 
                 int sz = v.size() ;

                 int mi = max(sz,sz1) ;

                 cout << mi << endl;                    
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
