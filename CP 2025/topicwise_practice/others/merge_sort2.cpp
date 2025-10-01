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

int a[N] ;
vector<int >  merge_sort(int l , int r){

          if(l == r){

               return vector<int > ({a[l]}) ;
          }

          int mid = (l+r)/2 ;

          vector<int > L = merge_sort(l , mid) ;

          vector<int > R = merge_sort(mid+1 , r) ;

          return merge(L,R) ;
}

void solve ()
{
                   

                   int n ; cin >> n ;

                   for(int i=0 ;i<n;i++){

                          cin >> a[i] ;
                   }
                  
                      auto ans = merge_sort(0, n-1) ;

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


     