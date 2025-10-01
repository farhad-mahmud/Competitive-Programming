#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{
             int n ; cin >> n;

             string s ; cin >> s ;

             int len = s.length(); 

             // base = red to blue ;
             // acid = blue to red ;
             // salt = no change ;
             int cnt_a = 0 ;
             int cnt_b = 0 ;
             int cnt_s = 0 ;

             for(int i=0;i<len ;i++){

                    if(s[i] == 'A'){
                             cnt_a++;
                    }
                    if(s[i] == 'B'){

                             cnt_b++;
                    }
                    if(s[i] == 'S'){
                             cnt_s++ ;
                    }
             }

         
             if(cnt_a == len || cnt_b == len){
                        cout << len << endl;
             }
             else if(cnt_a >0 && cnt_b>0){
                        cout << 1 << endl;
             }
             else if(cnt_s != len){
                      cout << max(cnt_a,cnt_b) << endl;
             }
             else {

                        cout << 2 << endl; 
             }


}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
