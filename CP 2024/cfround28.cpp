#include<iostream>


using namespace std;
int main()
{
    int t;
    cin >>t ;
    while (t--)
    {
        long long int x ;
        cin >> x ;
        if (x% 33 ==0)
        {
             cout<< "YES" <<  endl;

        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0 ;
}
