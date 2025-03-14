
#include <iostream>
using namespace std;

int main() {
    int n;
    char ch[n];
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>ch[i];

    if(ch[i]=='A' || ch[i]=='I' && ch[i+1]=='A' || ch[i+1]=='F'){
         count++;
    }
    }
    cout<<count;


    return 0;
}
