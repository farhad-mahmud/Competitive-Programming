#include<bits/stdc++.h>
#include<string>
using namespace std ;
int main()
{
    string embosser ;
    int i ,j ;
    embosser = "abcdefghijklmnopqrstuvwxyz" ;
    int l= embosser.length()  ;
    int counte =0  ,currentIndex = 0;
    string s ;
    cin >> s ;
    for(j=0;j<s.length();j++)
    {
        for(i=0;i<26;i++)
        {
            if (s[j]==embosser[i])
            {
                int targetIndex = i;

            int clockwise = (targetIndex - currentIndex + l) % l;
            int anticlockwise = (currentIndex - targetIndex + l) % l;

            counte += min(clockwise, anticlockwise);


            currentIndex = targetIndex;

            break;
            }
        }
    }
    cout << counte << endl;

    return 0 ;
}
