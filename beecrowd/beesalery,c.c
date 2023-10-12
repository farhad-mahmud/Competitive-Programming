#include <stdio.h>

int main() {
   int number,hours;
   float rate;
   double salary;
   scanf ("%d %d %f",&number,&hours,&rate);
   salary= (hours * rate);
   printf("NUMBER = %d\n",number);
   printf("SALARY = U$ %.2lf\n",salary);


    return 0;
}
