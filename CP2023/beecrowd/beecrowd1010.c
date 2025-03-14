#include<stdio.h>
int main ()
{
    int a,b,c,d;
    double f,k;
    double pay;
    scanf("%d %d %f %d %d %f",&a,&b,&f,&c,&d,&k);
    pay = (b*f+d*k);
    printf("VALOR A PAGAR: R$ %.2lf\n",pay);
    return 0;

}
