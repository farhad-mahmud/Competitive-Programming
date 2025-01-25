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
        int counte = 0 ;
        if(n%4==0)
        {
            counte = n/4 ;
        }
        else if(n==2)
        {
            counte = n/2 ;
           // break ;
        }
        else
        {
            counte = (n/4) + 1 ;
        }
        cout << counte << endl;
    }
    return 0 ;
}
