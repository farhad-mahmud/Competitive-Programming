#include<bits/stdc++.h>

using namespace std;

int main()

{
      int t ;
      cin >> t ;
      while(t--)
      {

              int n , m ;
              cin >> n >> m ;
              string s ;
              cin >> s ;
             map<char,int > freq ;

             for(char ch:s)
             {
                 freq[ch]++ ;
             }

              int sum = 0 ;

             for(auto i : freq)
             {
                 if(i.second>m)
                 {
                     sum += i.second - m ;
                 }
             }

             int needed_unique_char = (n-sum) ;
             int requir_char = (7*m) ;
             int ans = requir_char - needed_unique_char ;

             cout << ans << endl;



      }

}
