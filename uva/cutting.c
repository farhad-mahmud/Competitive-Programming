#include<stdio.h>
int main (){
    int t,a,b,c;
    int mid;
    scanf("%d",&t);
    int i;
            for(i=1;i<=t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if (a<1000 )

        if(a<b && a>c || a>b && a<c && a>=1000 && a<=10000){
                mid=a;

        }
        else if(b<a && b>c || b>a && b<c && b>=1000 && b<=10000){
            mid=b;
        }
        else if(c<b && c>a || c>b && c<a && c>=1000 && c<=10000){
        mid=c;
        }
        printf("Case %d: %d",i,mid);

            }
   return 0;
}
