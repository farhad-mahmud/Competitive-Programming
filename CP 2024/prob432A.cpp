#include<iostream>
using namespace std ;
int main()
{
    int n , k ;
    int arr[2000];
    cin >> n >> k ;
    int counte = 0 ,teams = 0 ;
    for (int i =0 ;i<n;i++)
    {
        cin>> arr[i] ;
    }

    for (int i=0;i<n;i++)
    {
        if (arr[i]+k <= 5)
        {
            counte += 1 ;
        }
    }
    teams = (counte / 3 ) ;

    cout << teams << endl;


    return 0 ;
}
