#include<stdio.h>
int main (){
    int n,h;
    int a[2000];
    int w=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=h){
            w+=1;
        }
        else{
            w+=2;
        }
    }
    printf("%d",w);
    return 0;
}
