#include<stdio.h>
#include<string.h>
int main (){
    int n,i;
    char ch[100];
    scanf("%d",&n);
            getchar();
    for(i=0;i<n;i++){
            int len=0;

         gets(ch);
        len=strlen(ch);

          if(len>10){
                printf("%c%d%c",ch[0],len-2,ch[len-1]);

    }
    else{
        printf("%s",ch);
    }
    printf("\n");

}
return 0;
}

