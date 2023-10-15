#include<stdio.h>
int main (){
        int n,k;
        int cigar=0;
        int x,y;
        while(scanf("%d %d",&n,&k)!=EOF){
                x=n-1;
                 y=k-1;
            cigar=(x/y)+n;
            printf("%d\n",cigar);
        }
        return 0;
}
