#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (q[i] == 'B' && q[i + 1] == 'G')
            {
                swap(q[i], q[i + 1]);
                i++;
            }
        }
    }
    cout << q;
}
