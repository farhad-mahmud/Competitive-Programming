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

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            int n ; cin >> n ;

            
            vector<pair<int,int >> p1, p2, p3;

            vector<int > a(n), b(n), c(n);
            for(int i=0;i<n;i++){
               cin >> a[i];
               p1.push_back({a[i] , i });
            }
               for(int i=0;i<n;i++){
                  cin >> b[i];
                    p2.push_back({b[i] , i });
               }

                  for(int i=0;i<n;i++){
                     cin >> c[i];
                     p3.push_back({c[i] , i });
                  }



            sort(allr(p1));
            sort(allr(p2));
            sort(allr(p3));


            int fmax = 0 ;

           int i = 0 ;
           int sum = 0;

                  if(p1[i].second == p2[i].second && p2[i].second == p3[i].second){

                       // if first i er 3 are same..
                     sum += p1[i].first;

                     i++ ;


                     // 1st i er ..2nd i te..i have to choose another 2 .. 
                     if(p1[i].second == p2[i].second && p2[i].second == p3[i].second){
                          // 3 are same..
                           sum+= p1[i].first;

                           i++ ;

                           // 1st i er .. 3rd i ..i have to choose just last one..

                            sum += max({p1[i].first, p2[i].first, p3[i].first});

                     }
                     else if(p1[i].second == p2[i].second || p1[i].second == p3[i].second || p2[i].second == p3[i].second){

                        //1st i er 2nd i te i have to chosse another 2,, and , just duita same.. 
                           if(p1[i].second == p2[i].second){
                              sum+= max(p1[i].first ,p2[i].first);
                              sum+= p3[i].first;
                        }
                        else if(p1[i].second == p3[i].second ){
                              sum += max(p1[i].first , p3[i].first);
                              sum+=  p2[i].first; 
                        }
                        else{
                              sum += max(p2[i].first ,p3[i].first);
                              sum += p1[i].first;
                        }
                     }


                }

                else if(p1[i].second == p2[i].second || p1[i].second == p3[i].second || p2[i].second == p3[i].second){
                          // 2nd i er  if 2 are same.
                        if(p1[i].second == p2[i].second){
                              sum+= max(p1[i].first ,p2[i].first);
                              sum+= p3[i].first;
                        }
                        else if(p1[i].second == p3[i].second ){
                              sum += max(p1[i].first , p3[i].first);
                              sum+=  p2[i].first; 
                        }
                        else{
                              sum += max(p2[i].first ,p3[i].first);
                              sum += p1[i].first;
                        }
                     
                    
                    // 2nd i ei just duita same.. so we found 2 values.. just need one more..
                     i++ ;
                     //  .. one more nibo..

                     sum += max({p1[i].first, p2[i].first, p3[i].first});

                }           
                else{

                    // first i ei.. jodi tintai different hoy..

                  sum += p1[i].first + p2[i].first + p3[i].first ;
                }

                  
         

            cout << sum << nl;
           

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
