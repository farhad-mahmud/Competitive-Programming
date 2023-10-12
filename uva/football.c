#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i;
    int count = 1;
    //int flag=0;
    scanf("%s", string);
    int len = strlen(string);

    for (i = 0; i < len - 1;i++) {
        if (string[i] == string[i + 1]) {
            count++;
           if(count>=7){
            break;
           }

    }
    else {
        count =1;
    }
    }
    if(count>=7){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
