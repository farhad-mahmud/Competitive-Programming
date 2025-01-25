#include<iostream>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int sum1 = 0,sum2= 0,sum3 =0;
        int a,b,c ;
        int flag=0;
        cin >> a >> b >> c ;
        sum1 = b+c ;
        sum2 = a+c ;
        sum3 = a+b ;

        if(a==sum1)
        {
            flag++ ;
        }
        else if(b==sum2)
        {
            flag++;
        }
        else if (c == sum3){
            flag++ ;
        }

        if (flag>0)
        {
            cout <<"YES"<< endl;
        }
        else
        {
            cout <<"NO" << endl;
        }

    }
    return 0 ;
}
