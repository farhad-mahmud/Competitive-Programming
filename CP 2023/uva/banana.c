#include<stdio.h>
int main (){

    int k,n,w;
    int borrow=0;
    int i,cost=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++){
        cost += (i*k);
    }
    if (cost==n){
            borrow=0;
    }
    else if (cost>n){
            borrow=(cost-n);
    }
    printf("%d\n",borrow);
    return  0;
}
