#include<stdio.h>
int main (){
    int t,c,d,i;
    double ff,f;
    double nc;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&c,&d);
        f=(c*9.0/5+32);
        ff=f+d;
        nc=(5*ff-160)/9;
        printf("Case %d: %.2lf\n",i+1,nc);

    }
    return 0;
}
