#include <stdio.h>
int main() {
    int x,z;
    int i;
    int steps = 0;
    int temp = 0;
    int ans;
    int arr[5] = {1, 2, 3, 4, 5};

    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        if (arr[i] == x) {
            steps = 1;
            break;
        }
    }
    if(x>5){
        for(i=4;i>=0;i--){
                if(x%arr[i]==0){
                    steps=x/arr[i];
                }
                steps=0;

            if(x%arr[i]!=0){
                       steps+=(x/arr[i]);
                       z=(x%arr[i]);
                       x=z;

                }
        }
    printf("%d\n",steps);
    }

    return 0;
}
