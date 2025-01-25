#include<iostream>
#include<string>
#include<vector>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    vector <int > morse ;
    for(int i=0 ;i<s.length();i++)
    {

        if (s[i]=='-' && s[i+1]=='.')
        {
            morse.push_back(1);
            i = i+ 1 ;

        }
        else if(s[i]=='-' && s[i+1] == '-')
        {
            morse.push_back(2);
            i = i+ 1 ;

        }
        else if (s[i]=='.')
        {
            morse.push_back(0);


        }
    }
    for (int i=0;i<morse.size();i++)
    {
        cout << morse[i] ;
    }
    return 0 ;
}
