#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;


int main() {
    FAST_IO;
    
       int n ; cin>> n;
       vector <int > p(n) ;

       for(int i=0;i<n;i++){

          cin >> p[i] ;
       }
       
  int mi = *min_element(p.begin(),p.end()) ;
  int ma = *max_element(p.begin(),p.end()) ;
   
   int dif = ma - mi ;
      int count = 0 ;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

           if(p[i] - p[j] == dif)
           {
                 count++ ;
           }
    }
   }

   cout << count << endl;

    return 0;
}
