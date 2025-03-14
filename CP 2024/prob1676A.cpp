#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;



        int count1 = 0, count2 = 0;


        for (int i = 0; i < 3; i++)
        {
            count1 += s[i];
        }


        for (int i = 3; i < 6; i++)
        {
            count2 += s[i];
        }



        if (count1 == count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
