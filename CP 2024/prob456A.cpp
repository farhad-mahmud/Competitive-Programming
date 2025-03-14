#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)

using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ;
    for(int i=0;i<n;i++)
    {
        cin>> a[i] >> b[i] ;
    }
    bool flag = false ;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1 ;j<n;j++){

          if (a[j]>a[i] && b[i]>b[j])
          {
              flag = true ;
              break ;
          }
        }

    }

    if(flag)
    {
        cout <<"Happy Alex" <<endl;
    }
    else{
        cout << "Poor Alex" << endl;
    }

    return 0 ;
}

