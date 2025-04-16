#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

int work(int x){

 int count = 0;
    while (x) {
        if (x & 1) count++; 
        x >>= 1;            
    }
    return count;
}



void solve ()
{
        
                   int n , m , k ;  cin >> n >> m >>k ;

                   vector <int > x(m+1) ;

                   for(int i=0;i<=m ;i++){


                            cin >> x[i] ;  //  consider binary of x[i] ;
                                           // if jth bit binary bit is 1 , then the army of the 
                                           // ith player has soldiers of jth type 
                   }
           

                 int fedor = x[m] ;

                 int cnt = 0 ;

                 for(int i=0;i<m ;i++){

                       int dif = x[i] ^ x[m] ;

                         if(work(dif)  <= k){

                               cnt++ ;
                         }
                 }

        

                 cout << cnt << endl ; 

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
