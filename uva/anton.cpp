#include<iostream>
#include<cstring>
using namespace std;
int main (){
    int n,i;
    char st[100];
    scanf("%d",&n);
    int count1=0,count2=0;

   for(i=0;i<n-1;i++){
    scanf("%c",&st[i]);
        if(st[i]=='A'){
           count1++;
        }
        else if(st[i]=='D'){
            count2++;
        }
   }

    if(count1>count2){
        printf("Anton\n");
    }
    else if(count1<count2){
        printf("Danik\n");
    }
    else{
        printf("Friendship\n");
    }
    return 0;

}
