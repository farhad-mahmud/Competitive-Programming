#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int x[4],y[4];
        int check = 0,root = 0;
        for (int i=0;i<4;i++)
        {
            cin >> x[i] >> y[i] ;
        }

        for (int i=0;i<4;i++)
        {
            int next = (i+1) % 4 ;
            check = (x[next] - x[i]) * (x[next] - x[i]) + (y[next] - y[i]) * (y[next] - y[i]);

            root = sqrt(check) ;
            if(root * root == check )
            {
                check = (x[next] - x[i]) * (x[next] - x[i]) + (y[next] - y[i]) * (y[next] - y[i]);
                break ;
            }
        }
        cout << check << endl;

    }
    return 0 ;
}
