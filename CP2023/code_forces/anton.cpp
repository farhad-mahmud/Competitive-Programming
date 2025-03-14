#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main()
{
    string letters;
    string new_string;
    getline(cin,letters);
    int i ,j;
    j=0 ;
    new_string.resize(letters.length());
    for(i=1;i<letters.length();i++){

        if(letters[i]>=97 && letters[i]<=122)
        {
                 new_string[j]=letters[i];
                 j++;
        }
    }
    new_string.resize(j);
    sort(new_string.begin(),new_string.end());
    auto it = unique(new_string.begin(),new_string.end());
    new_string.erase(it,new_string.end());

    cout << new_string.length()<< endl;
    return 0 ;
}
