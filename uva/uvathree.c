#include<stdio.h>
int main (){
    int x,y,z,T,pay;
     scanf("%d",&T);
    while(T>0){
        scanf("%d %d %d",&x,&y,&z);
    pay=z*(2*x-y)/(x+y);
    printf("%d\n",pay);
        T--;

    }
    return 0;
}
