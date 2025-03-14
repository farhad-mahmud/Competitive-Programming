#include <iostream>
#include <algorithm>
#include <cctype>  // transform
using namespace std;

int main()
{
    string word;
    cin >> word;
    int length, i;
    length = word.length();
     bool allUpperCase = true ;
  //   cout << allUpperCase << endl;
    bool firstletterlowercase = tolower(word[0]) ;
    for ( i = 1; i < word.length(); i++) {
        if (!isupper(word[i])) {
            allUpperCase = false;
            break;
        }
    }
   // cout << allUpperCase << endl;

    if(firstletterlowercase && allUpperCase)
    {
       cout << word << endl;
    }
  if (firstletterlowercase && !allUpperCase)
  {
      word[0]= toupper(word[0]);
      for(i=1;i<length;i++)
      {
          word[i]=tolower(word[i]);
      }
        cout << word << endl;

  }
  else if(!firstletterlowercase && !allUpperCase)
  {
      for(i=1;i<length ;i++)
      {
          word[i]=tolower(word[i]);

      }
        cout << word << endl;
  }


    return 0;
}
