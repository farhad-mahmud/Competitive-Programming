#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){

    char s1[100];
    scanf("%s",s1);
    int count=0,count1=0,i;
    int len= strlen(s1);
    for(int i=0;i<len;i++){
          if(s1[i]>='a' && s1[i]<='z'){
            count++;
          }
          else if(s1[i]>='A' && s1[i]<='Z'){
            count1++;
          }
    }

        if(count==count1 || count>count1){
           for(i=0;i<len;i++){
            s1[i]=tolower(s1[i]);
           }
        }
        else if (count1>count){
                for(i=0;i<len;i++){
                s1[i]=toupper(s1[i]);
                }
        }
        printf("%s\n",s1);
        return 0;

}
