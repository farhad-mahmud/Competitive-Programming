#include<iostream>
#include<string >
using namespace std;
int main()
{
    int t,m ,tc=1 ;
    string a,b ;
    cin >> t ;
    int flag= 0;
    string drunk[20];
    cin >> m ;
    while(t--)
    {

        for(int i= 0;i<m;i++)

           {
             cin >> drunk[i];

           if (drunk[i]!="soda" || drunk[i]!="water")
           {
               flag++ ;
           }
        }

        if(flag>=1)
        {
            cout <<"Case " << tc << ": " <<"No" << endl;

        }
        else
        {
             cout <<"Case " << tc << ": " <<"Yes" << endl;
        }

        tc ++ ;
    }







    return 0 ;
}
