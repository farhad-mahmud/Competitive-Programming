#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

char  f(char a, int k , int h){

          if(a == 'b'){

                 if(k == 0 && h == 0){

                     return 'b';
                 }
                 if(k == 0 && h == 1){

                     return 'p';
                 }
                 if(k == 1 && h == 0){

                     return 'd';
                 }
                 if(k == 1&& h == 1){

                     return 'q' ;
                 }
          }
         else  if(a == 'p'){

                 if(k == 0 && h == 0){

                     return 'p';
                 }
                 if(k == 0 && h == 1){

                     return 'b' ;
                 }
                 if(k == 1 && h == 0){

                     return 'q' ;
                 }
                 if(k == 1&& h == 1){

                     return  'd' ;
                 }
          }
          else  if(a == 'q'){

                 if(k == 0 && h == 0){

                     return 'q';
                 }
                 if(k == 0 && h == 1){

                     return 'd' ;
                 }
                 if(k == 1 && h == 0){

                     return 'p' ;
                 }
                 if(k == 1&& h == 1){

                     return  'b' ;
                 }
          }
          else  if(a == 'q'){

                 if(k == 0 && h == 0){

                     return 'q';
                 }
                 if(k == 0 && h == 1){

                     return 'd' ;
                 }
                 if(k == 1 && h == 0){

                     return 'p' ;
                 }
                 if(k == 1&& h == 1){

                     return  'b' ;
                 }
          }
          else  if(a == 'd'){

                 if(k == 0 && h == 0){

                     return 'd';
                 }
                 if(k == 0 && h == 1){

                     return 'q' ;
                 }
                 if(k == 1 && h == 0){

                     return 'b' ;
                 }
                 if(k == 1&& h == 1){

                     return  'p' ;
                 }
          }else
          {
                return a;
          }

}
void solve ()
{
                 
                   string s ,t  ; cin >> s >> t ;
                   int h=0,v=0,rev=0;

                   for(char &c:t)
                   {
                    if(c=='h')
                    {
                      h^=1;
                      rev^=1;
                    }
                    else if(c=='v')v^=1;
                    else 
                    {
                      h^=1;
                      v^=1;
                      rev^=1;
                    }

                   }
                   string s1;

                   for(char &ch:s)
                   {

                      ch = f(ch, h, v) ;



                   }


                    if(rev == 1){


                        reverse(s.begin(), s.end()) ;

                        cout << s  ;
                    }
                    else {

                        cout << s ;
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
