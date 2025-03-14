#include<stdio.h>
int main (){
    int n,i;
    char st[100000];
    int count1=0,count2=0;
    scanf("%d",&n);

    scanf("%s",st);
   for(i=0;i<n;i++){
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
