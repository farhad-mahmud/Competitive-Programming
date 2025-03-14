#include<stdio.h>
int main (){
    int t,N;
    int j,z;
    int max,i,a,temp=0;
    scanf("%d",&t);
    for(z=0;z<t;z++){
        scanf("%d",&N);
        int a[N];
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
        }


        for (i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        }
        max=a[0];
        for(i=1;i<N;i++){
            if(max<a[i]){
                max=a[i];
            }

        }

        printf("Case %d: %d\n",z+1,max);

    }
}

