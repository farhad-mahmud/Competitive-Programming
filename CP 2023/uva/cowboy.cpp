#include<iostream>
using namespace std;
int main() {
int n;
string s;
int a=0,i=0;
cin>>n;
cin>>s;
for(int j=0;j<n;j++){

    if(s[j]=='A'){
        a++;
    }
    else if(s[j]=='I'){
             i++;
    }
}

if(i==1){
    cout<<'1';
}
else if(i>=2){
    cout<<'0';
}
else{
    cout<<a;
}
return 0;


}

