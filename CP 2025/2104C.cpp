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
void solve ()
{
        
            int n; 
          cin >> n; 
 
          string s; 
          cin >> s; 
   
          vector<int>a, b; 

       for(int i = 0; i < n; i++){
          if(s[i] == 'A')a.push_back(i + 1);
          else b.push_back(i + 1);
         }
 
      int flag = 1;
      int a_sz= a.size(), b_sz = b.size();
      int last_a = a.back(), last_b = b.back();
 
   if(n == 2){
      
             if(s[0] == 'A'){

                        cout << "Alice" << endl;
                        return ;

             }
             else{

                      cout << "Bob" << endl;
                      return ;
             }
   }
   else{
     if(last_a > last_b){
        if(a_sz == 1)flag = 2;
        else if(s[0] == 'A')flag = 1;
        else{
           
            if(b[b_sz - 1] > a[a_sz - 2])flag = 2;
            else flag = 1;
        }
     }
     else{
        if(b_sz == 1)flag = 1; 
        else flag = 2;
     }
   }
   if(flag == 1)cout << "Alice" << endl ;
   else cout << "Bob" << endl;       

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
