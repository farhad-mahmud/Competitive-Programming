#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    int x =0;
    while (t--)
    {
        int n ;
        cin >> n ;
        if (n<=1399)
        {
            x = 4 ;
        }
        else if (n>=1400 && n <=1599)
        {
            x = 3;
        }

        else if (n>=1600 && n<= 1899)
        {
            x = 2 ;

        }
        else
        {
            x = 1 ;
        }

        cout << "Division" << " " << x << endl;
    }
    return 0 ;
}
