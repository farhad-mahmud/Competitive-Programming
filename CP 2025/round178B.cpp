#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
   
    vector <int > pref_max(n) ;

    vector<int> p(n);

    pref_max[0] = v[0] ;
     
     for(int i=1;i<n;i++){

            pref_max[i] = max(v[i],pref_max[i-1]);

     }

     for(int i=0;i<n;i++){

                   p[i] = pref_max[n-i-1] ;
            
     }


      
    vector <int > q(n) ;

    
  int suf_sum = 0; 
 

    int k = 0 ;

    reverse(v.begin(),v.end()) ;

  for (int i = v.size()-1 ; i >= 0; i--) {

       int l = k-1 ;

       if(k == 0){

             suf_sum += 0 ;
       }
       else {


                suf_sum += v[l] ;
       }

    // cout << "suf sum :" <<  suffix_sum << endl; 
    if (i == v.size()-1) {

        q[i] = p[k]; 

       // cout << p[k] << endl ;  
     k++;                              
    } else {

        q[i] = suf_sum + p[k];

      //  cout << "pk " << p[k] << endl; 
        k++;
    }

    
}

     reverse(q.begin(),q.end()) ;

    for (auto i : q) {
        cout << i << " ";
    }
    cout << endl;
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
