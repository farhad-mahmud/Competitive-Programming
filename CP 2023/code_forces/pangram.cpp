#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);

    set<char> pangramLetters;
    for (int i = 0; i < n; i++)
    {
        char c = tolower(s[i]);

        if (c >= 'a' && c <= 'z')
        {
            pangramLetters.insert(c);
        }
    }

    if (pangramLetters.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
