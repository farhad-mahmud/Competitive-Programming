#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define ll             long long int
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        int counte = 0 ;

        for(int i=0;i<s.length();i++)
        {

           if(s[i]=='1')
           {
               counte ++ ;
           }

        }
        cout << counte << endl;
    }

    return 0 ;
}

