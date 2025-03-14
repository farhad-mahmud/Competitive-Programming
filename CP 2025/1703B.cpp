#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
                 int n ;
                 cin >> n ;
                 string s ;
                 cin >> s ;

                 map <char ,int > freq ;

                 for(char ch : s)
                 {
                     freq[ch]++ ;
                 }

                 int cnt = 0 ;


               //  for(auto i :freq ){

                  //   cout << "'" << i.first << "' : " << i.second << endl;
                 //}

                 for(auto i : freq){

                       if(i.second == 1)
                       {
                           cnt += 2 ;
                       }
                       else if (i.second > 1 )
                       {
                             cnt += i.second +  1 ;
                       }

                      // cout << cnt << endl;
                 }

                 cout << cnt << endl;



    }

    return 0;
}

