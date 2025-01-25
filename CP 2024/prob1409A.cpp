#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int main()
{
    int t  ;
    cin >> t ;
    while(t--)
    {
        int a ,b ;
        cin >> a >> b ;
        int seyita = 0 ;
        int y = abs(a-b) ;

        if (y==0){
                seyita = 0 ;

        }


        else  if (y>0){
        for(int i = 10 ;i>0;i--)
        {
            if(y>=i){
            seyita += y/i ;
            y = (y%i) ;
            }

        }
        }

        cout << seyita << endl;
    }

    return 0 ;
}

