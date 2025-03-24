#include <bits/stdc++.h>
using namespace std;
 
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() {
    FAST_IO;
 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
   
     int n = s.size() ;
     int f= 0 ;
       
        for(int i=0;i<n-1 ;i++){

             if(s[i] ==s[i+1]) {


                     f = 1 ;
                     break ;
             }
        }

        if(f){

              cout << 1 << endl;
        }
        else {

               cout << n << endl; 
        }

    }
 
    return 0;
}