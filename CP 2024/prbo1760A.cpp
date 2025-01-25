#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
         int a ,b,c ;
         cin >> a >> b >> c  ;
        int low = min(a ,min(b,c));
        int high = max(a, max (b,c)) ;

        if (a!= low && a!=high)
        {
            cout << a << endl;
        }
        else if (b!= low && b!= high)
        {
            cout << b << endl;
        }
        else
        {
             cout << c << endl;
        }
    }
    return 0 ;
}
