#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    int i;
    char* num[100]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a,&b);
  	// Complete the code.
  if(a<b){
      for(i=a;i<=b;i++){
          if(i<=9){
              printf("%s\n",num[i-1]);
          }
          else if  (i%2==0){
              printf("even\n");
          }
          else{
              printf("odd\n");
          }


      }
  }
      if(a>b){
          for(i=b;i<=a;i++){
          if(i<=9){
              printf("%s\n",num[i-1]);
          }
          else if(i%2==0){
              printf("even\n");
          }
          else{
              printf("odd\n");
          }
          }
      }


    return 0;
}

