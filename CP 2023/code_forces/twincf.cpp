#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main (){
   int n;
   cin>>n;
   vector<int>coins;
   int targetsum=0;
   int coinvalue;
   for(int i=0;i<n;i++){
    cin>>coinvalue;
    coins.push_back(coinvalue);
   }
   sort(coins.begin(),coins.end(),greater<int>());
   int index=0;
   int countcoin=0;
   int summ=0;
   for(int coin : coins){
    targetsum+=coin;
   }
    targetsum=targetsum/2;
   while(summ <= targetsum){
    summ+=coins[index];
    countcoin++;
    index++;
   }

cout<< countcoin<<endl;

}
