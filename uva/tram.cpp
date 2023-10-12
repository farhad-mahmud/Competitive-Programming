#include<iostream>
int main (){
    int n;
    int a,b;
    int i,sum=0;
    int max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        sum+=b-a;
        if(sum>max){
            max=sum;
        }



    }
    printf("%d",max);
}
