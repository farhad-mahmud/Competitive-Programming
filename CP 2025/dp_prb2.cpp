#include<bits/stdc++.h>

using namespace std;
// number of ways !


 // complexity big 0(n)

const int N = 1e5 + 9 , mod = 1e9 + 7 ;

int ways[N] ;
int count(int i){            // we have define 3 base case , cause (i-3) , 
                              //that why we need first 3, for (i-3) ;

        if(i==1) return 1 ;
        if(i==1) return 1 ;
        if(i==2) return 3 ;
        
        if(ways[i] != -1) return ways[i] ;
        

        return ways[i] = count(i-1) + count(i-3) % mod ;
}
int32_t main(){
ios_base:: sync_with_stdio(0);
cin.tie(0);
  
     
     memset(ways , -1, sizeof ways) ;
     cout << count(3) << endl;
     return 0 ;

}