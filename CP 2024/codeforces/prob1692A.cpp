#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        vector<int> marathon;
        int countt = 0;
        cin >> a >> b >> c >> d;
        marathon.push_back(a);
        marathon.push_back(b);
        marathon.push_back(c);
        marathon.push_back(d);

        for (int i = 1; i < 4; i++)
        {
            if (marathon[i] > marathon[0])
            {
                countt++;
            }
        }
        cout << countt << endl;
    }
    return 0;
}
