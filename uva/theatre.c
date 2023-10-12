#include<stdio.h>
int main (){
    unsigned long long int n,m,a;
    unsigned long long int t,k;
    unsigned long long int stone;
    scanf("%lld %lld %lld",&n,&m,&a);

    if(n<=a && m<=a)
    {
        stone=1;
    }
    else if(n<=a && m> a)
    {
        t=m/a;

        if (m%a!=0){
        t = t+1;
    }
    stone = t;
    }
    else if(n>a && m<=a)
    {
        k=n/a;

        if (n%a!=0){
        k = k+1;
        }
        stone = k;

    }
    else if(n>a && m > a)
    {
        k=n/a;
        t=m/a;

        if (n%a!=0){
        k = k+1;
        }
        if(m%a!=0)
        {
            t = t+1;
        }
        stone = (t*k);

    }

    printf("%lld\n",stone);
    return 0;
}
