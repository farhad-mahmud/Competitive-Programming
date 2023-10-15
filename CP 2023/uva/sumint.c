#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder;
   int sum2=0;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
      while(t!=0){
        remainder = sum%10;
        sum2=sum2+remainder;
        sum=sum/10;
      }

   }
   printf("%d",sum2);

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}
