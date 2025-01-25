#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
      int x1,x2,x3 ;
      int a=0,b=0;
      cin >> x1 >> x2 >> x3 ;
      int m= max({x1,x2,x3});
      int l=min({x1,x2,x3});

        if(x1>l && x1 <m)
        {
           a = m-x1 ;
           b = x1-l;

        }
        else if (x2 > l && x2<m)
        {
            a = m-x2 ;
           b = x2-l;
        }
        else
        {
            a = m-x3;
            b=x3-l;
        }


          cout << a+b << endl;


      return 0 ;


}
