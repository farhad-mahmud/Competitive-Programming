#include <iostream>
using namespace std;
int cycleLength(int n);

int main(){
    int a,b;
    cin >> a >> b;
    int max = 0;
    for(int i=a;i<=b;i++){
        int temp = cycleLength(i);
        if(temp>max){
            max = temp;
        }

    }
    cout << a << " " << b << " " << max << endl;
    return 0;
}

int cycleLength(int n){
    int count = 1;
    while(n!=1){
        if(n%2==0){
            n = n/2;
        }else{
            n = 3*n+1;
        }
        count++;
    }
    return count;
}
