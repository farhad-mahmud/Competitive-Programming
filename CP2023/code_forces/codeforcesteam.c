#include<stdio.h>
int main (){
 int n,i;
 int count=0;
 int a,b,c;
 scanf("%d",&n);
 for(i=0;i<n;i++){
     scanf("%d %d %d",&a,&b,&c);
     if(a==1&&b==1&&c==1){
        count++;
     }
     else if(a==1&&b==1&&c==0){
        count++;
     }
     else if(a==1&&b==0&&c==1){
        count++;
     }
     else if(a==0&&b==1&&c==1){
        count++;
     }

 }
 printf("%d\n",count);
 return 0;
}
