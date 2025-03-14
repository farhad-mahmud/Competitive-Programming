#include<bits/stdc++.h>

#define ll    long long int

using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
             int  x ;
             cin >> x ;
             int c = 1;
             int base_count = 0;
             int final_ans = 0;
             for (int i=1;i<=4;i++ )
                {

                     if(x<10)
                      {

                          break ;
                      }
                      x = x/10 ;
                      c = i+1 ;

                }


                int dif = (x-1) ;
                if(c == 1)
                {
                    final_ans = (dif*10) + c ;
                }
                else if(c==2){

                        final_ans = (dif*10) + (c*(c-1)) + 1 ; ;
                }
                else if(c==3)
                {
                    final_ans = (dif*10) + (c*(c-1)) ;
                }
                else
                {
                    final_ans = (dif*10) + (c*(c-1)) - 2 ;
                 }

                 cout << final_ans << endl;
    }

    return 0 ;
}

