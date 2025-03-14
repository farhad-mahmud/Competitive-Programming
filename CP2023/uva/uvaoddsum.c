#include <stdio.h>

int main() {
    int i,j,t,a,b;
    int sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
           for(j=a;j<=b;j++){
        if(j%2==1){
            sum+=j;

        }

           }
       printf("case %d: %d\n",i,sum);
       sum=0;

    }

    return 0;
}
