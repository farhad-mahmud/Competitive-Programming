
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,sum,x;
    string s;
    cin>>n;
    cin>>s;
    sum = 0;
    for(i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            sum++;
        }
    }
    printf("%d", sum);

    return 0;

}
