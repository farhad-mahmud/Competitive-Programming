#include<iostream>
using namespace std;
 int isdigit(int y){
     int digits[10]={0};
     while(y>0){
        int digit=y%10;
        if(digits[digit]==1){
                return 0;

        }
        digits[digit]=1;
        y=y/10;


    }
    return 1;
 }



int main (){

    int y;
    int i;
    cin>>y;
    while(1){
            y++;
    if(isdigit(y)){
        cout<<y;
        break;
    }

    }
    return 0;

}
