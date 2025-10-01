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

//given two sorted arrays l and r  ;
// merge them and return the sorted array 
vector<int >merge(vector<int>& l , vector<int>& r){

      vector<int > ans ;

      int i =0 , j = 0 ;  // pointers ;

      while(i < l.size() && j < r.size()){

           if(l[i] < r[j]){

               ans.push_back(l[i]) ;
               i++ ;
           }
           else {

               ans.push_back(r[j]) ;
               j++ ;
           }
      }

      while(i <l.size()){
            ans.push_back(l[i]) ;
            i++ ;
      }

      while(j <r.size()){

            ans.push_back(r[i]) ;
            j++ ;
      }

      return ans ;
}

void solve ()
{
                   vector<int > l({1,4,6,8}) , r({2 ,5 , 6, 7}) ;

                   auto ans = merge(l,r) ;

                   for(auto i : ans){

                        cout << i << ' ' ;
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
