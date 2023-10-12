#include<stdio.h>
int main (){
    int n,i;
    int base3[32];
    while(1){
    int index=0;
        scanf("%d",&n);
    if(n==0){
        printf("0");
    }
        else if(n<0){
            break;
        }

        while(n>0){

            base3[index]=n%3;
            n=n/3;
            index++;
        }
        for(i=index-1;i>=0;i--){
        printf("%d",base3[i]);

        }
        printf("\n");
    }
    return 0;
}
