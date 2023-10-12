#include<iostream>
#include<cstring>
using namespace std;
int main (){
    string s;
    int flag;
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++){
        if(len-1>='5'&& s[i]=='h' && s[i]=='e' && s[i]=='l'&& s[i]=='l'&& s[i]=='o'){
        flag=1;
        }
        else if(printf){
        flag=0;
    }
    if(flag==1){
        cout<<"YES";
    }
    else if(flag==0){
            cout<<"NO";

    }
     return 0;
    }
}



