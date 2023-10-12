#include<stdio.h>

int main ()
{

     int t,i,n;
     int sum=1,sum1=1;
     scanf("%d",&t);
     for(i=0;i<t;i++){
        scanf("%d",&n);
        sum=(n*567/9)+7492;
        sum1=(sum*235/47)-498;
        sum1=sum1/10;
        sum1=sum1%10;
        if(sum1<0){
                sum1=sum1*-1;
        printf("%d\n",sum1);
     }
     else {
        printf("%d\n",sum1);
     }

     }

    return 0;
}



