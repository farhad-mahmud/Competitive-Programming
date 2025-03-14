#include<iostream>
#include<string>
using namespace std;
int main()
{
    string song;
    getline(cin,song);
    size_t i =0 ;
    while((i=song.find("WUB",i)) != string::npos)
    {
        song.replace(i,3," ");

    }
    cout << song << endl;
    return 0 ;
}
