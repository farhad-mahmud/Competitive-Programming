#include<iostream>
#include<ostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,numbers,count1=0,count2=0;
    vector <int> v ;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> numbers ;
        v.push_back(numbers) ;
    }
    for(int i :v)
    {
        if(v[i]%2==0)
        {
            count1++;
        }
    }
    for(int i :v)
    {
        if(v[i]%2==1)
        {
            count2++;
        }
    }



//    if(count1>count2)
//    {
//        for(int i :v)
//        {
//            if(v[i]%2==1)
//            {
//                i=i+1;
//                cout<< i;
//                break;
//
//            }
//        }
//    }
//
//    else
//    {
//        for(int i :v)
//        {
//            if(v[i]%2==0)
//            {
//                cout<<
//                i=i+1;
//                cout<< i;
//                break;
//            }
//        }
//    }

for (int i=0;i<v.size();i++){

    if(count1>count2){
        if(v[i]%2!=0){
            cout<<i+1;
        }

    }
    else{
        if(v[i]%2==0){
            cout<<i+1;
        }
    }

}

}
