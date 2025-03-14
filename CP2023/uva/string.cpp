#include<iostream>
#include<string>
using namespace std;
int main (){
    string a,b;
    int cmp;
    getline(cin,a);
    getline(cin,b);

    for(char& c : a){
        c=tolower(c);
    }
    for(char& c : b){
            c=tolower(c);
    }

    cmp=a.compare(b);
    if(cmp<0){
        cout<<-1<<endl;
    }
    else if(cmp>0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}

