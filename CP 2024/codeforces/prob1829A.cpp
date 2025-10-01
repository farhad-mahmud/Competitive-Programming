#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin>> s ;
        string s0 = "codeforces" ;
        int j =0 ;
        int counte = 0;
        for(int i=0;i<10;i++)
        {
            if (s[i]!=s0[j])
            {
                counte ++ ;
            }
            j++ ;
        }
        cout << counte << endl;
    }
    return 0 ;


}
