
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
         int n ;
         cin >> n ;
         string s ;

         vector<int > black ;
         int white = 0 ;
         for(int i=1;i<=n;i++)
         {
             cin >> s[i] ;
             if(s[i]=='B')
             {
                 black.push_back(i);
             }
         }
          int mi = *min_element(black.begin(),black.end());
          int ma = *max_element (black.begin(),black.end()) ;

         white = (ma- mi)+1 ;

         cout <<  white   << endl;

    }
    return 0 ;
}
