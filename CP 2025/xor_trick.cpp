 #include <bits/stdc++.h>

using namespace std;
 
 const int N = 2e5 + 9 ;


 int32_t main(){
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int n , q ; cin >> n >> q ;

         vector<int > x(N) ;

         for(int i = 1 ;i<=n;i++){

         	    cin >> x[i] ;
         }

         vector<int > pref_xor(N) ;
         

         
         for(int i=1;i<=n;i++){


         	    pref_xor[i] = pref_xor[i-1] ^ x[i] ;  // prefix xor ;
         }



         while(q--){

                 int l , r;

                 cin >> l >> r;

                cout << (pref_xor[r] ^ pref_xor[l-1]) << endl;


         }

       return 0 ;

 }