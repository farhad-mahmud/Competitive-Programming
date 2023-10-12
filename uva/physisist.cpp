#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[100][100],i,j,n,k,count=0;
    cin >> n;
    cin >> k;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<1;i++){
        for(j=0;j<k;j++){
            count += (arr[i][j]) + (arr[i+1][j]) + (arr[i+2][j]);
        }
    }
    if(count==0){

        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}

