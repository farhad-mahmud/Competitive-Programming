#include<stdio.h>
#include<string.h>
int main (){

    char s[1000];
    gets(s);
    if(s[0]>='a' && s[0]<='z'){
        s[0]=toupper(s[0]);
    }
    printf("%s\n",s);
    return 0;

}
