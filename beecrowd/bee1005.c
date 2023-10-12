#include<stdio.h>
#include<math.h>
int main ()
{
    double c,d;
    double A =3.5;
    double B =7.5;
    scanf("%.lf %.lf",&c,&d);
    double sum = A+B;
    double avg =((A*c+B*d)/sum);
    printf ("MEDIA = %.5lf\n",avg);
    return 0;


}
