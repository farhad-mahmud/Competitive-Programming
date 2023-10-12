#include<stdio.h>
#include<string.h>
int main (){

    char s[100];
    int len=0;
    int result=0;
    int char_count[256]={0};
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++){
        char_count[(int)s[i]]++;
    }
    int count=0;
    for(int j=0;j<256;j++){

        if(char_count[j]>1){
          count+=char_count[j]-1;
      //char_count[j]=1;
        }
    }
    result=(len-count);
    if(result%2==0){
        printf("CHAT WITH HER!\n");
    }
    else if(result%2!=0){
        printf("IGNORE HIM!\n");
    }
    return 0;
}




