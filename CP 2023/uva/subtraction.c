#include<stdio.h>
int main (){
    int n,k;
    int i;
    int t=0;
    scanf("%d %d",&n,&k);
   while(t<k){
        if(n%10!=0){
            n=(n-1);
        }
        else if(n%10==0){
            n/=10;
        }
      t++;
    }
    printf("%d\n",n);
}
