
#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define s(f)        sort((f).begin(),(f).end())
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)

using namespace std;
int main()
{
   int a , b ;
   cin >> a >> b;
   int ans = 0 ;
   if(a == 1 && b== 2 || a==2  & b ==1)
   {
      ans = 3 ;
   }
   else if(a==1 && b==3 || a==3 && b==1)
   {
       ans = 2 ;
   }
   else if(a==2 && b==3 || a==3 && b==2)
   {
       ans = 1 ;
   }

   cout << ans << endl;

   return 0 ;
}
