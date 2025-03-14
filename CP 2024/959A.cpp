#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n;
    bool flag ;
    int M=0,E=0 ;
    int a = 1 ;
    while(n>=a)
    {

        if(n%2==0)
        {
            if(a%2==0)
            {
                M++ ;
                n = n- a ;
            }
            a++ ;
        }
        else if(n%2==1)
        {
              if(a%2==0)
            {
                E++ ;
                 n = n- a ;
            }

            a++ ;
        }

    }
      if (M>E)
      {
          cout << "Mahmoud" << endl ;
      }
      else
        cout << "Ehab" << endl;
}
