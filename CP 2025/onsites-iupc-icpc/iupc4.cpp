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


void solve (int k )
{
          
                       string s ; cin >> s;

                       int n, q ; cin >> n >> q ;

                       vector<int > id(n);

                      
                       for(int i=1;i<=n;i++){ 
                     
                              cin >> id[i] ;

                        }

                        
                        vector< string > ans ;
                     
                       
                         
                        for(int i=1;i<=q;i++){ 
                               
                               int pos = 0 ;
                               string ac ;
                               cin >> ac ;
                               cin >> pos ;

                               if(ac == "c" && pos <= new_id.size()){


                                     char u ;

                                     u = (id[pos] + '0') ;

                                     ans.push_back(string(1,u));

                                    

                               }
                               else if(ac == "a"){

                                     char v;

                                      v= (pos + '0');
                                 
                                      id.push_back(v);


                               }
                               else if(ac == "c" && pos > new_id.size()){ 

                                       string a = "none" ;

                                       ans.push_back(a);

                                 }


                        }
                



 

               cout << "Case " << k << ":" << endl;

               for(int i=0;i<ans.size() ;i++){

                       cout << ans[i] << endl;

               }
             
              cout << endl; 
}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;
         
         int k = 0 ;
         while(t--){
           
             k++ ;
            solve(k) ;
        
        }


    return 0;
}
