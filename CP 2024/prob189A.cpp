#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n ,a,b,c;
    cin >> n >> a >> b >> c ;
    int mi = min(a,min(b,c));
    int ma = max(a,max(b,c)) ;
    int mid =0 ,counte= 0 ;
    int sum_mi_mid =0,sum_mi_max =0,sum_max_mid = 0 ;
    int x1=1,x2=1,x3=1;


    if (a==b || b==c || a==c)
    {

      if ((a != mi && b != mi) || (a == b && b != c)) {
        mid = a;
    } else if ((b != mi && c != mi) || (b == c && c != a)) {
        mid = b;
    } else {
        mid = c;
    }
    }

    else {
    if (a>mi && a< ma)
    {
        mid = a ;
    }
    else if (b>mi && b < ma)
    {
        mid = b ;
    }
    else
    {
        mid = c ;
    }
    }

      sum_mi_mid = ( mi+ mid ) ;

      sum_mi_max = (mi+ ma) ;
      sum_max_mid = (ma + mid) ;


    if((n % a==0 || n % b ==0 || n% c ==0) && (n != a && n!= b && n!=c ))
    {
        if (n % a == 0) { x1 = n / a; }
        if (n % b == 0) { x2 = n / b; }
        if (n % c == 0) { x3 = n / c; }

       counte = max(x1,max(x2,x3)) ;
    }

    else
    {
    if ((n % a ==0 || n % b==0 || n %c == 0 )&&(n ==a || n == b || n == c )&& n!= ma)
        {
            if (n == 1 )
            {
                counte = n ;
            }
            else if (n % mid == 0)
            {
                x2 = n / mid ;
            }
            else if ( n % mi == 0)
            {
                x3 = n/ mi  ;
            }

            counte = max (x2 ,x3) ;
        }
        else {

    if (n==1 )
    {
        counte = n ;
    }
    else if (sum_mi_mid == n)
    {
        counte = 2 ;
    }
    else if (sum_mi_max ==n )
    {
        counte = 2 ;
    }
    else if (sum_max_mid == n)
    {
        counte = 2 ;
    }
    else if ( n% mi == 0)
    {
        counte = n/mi ;
    }
    else {
        counte = 1 ;
    }
        }

    }
      cout << counte << endl;

    return 0 ;
}
