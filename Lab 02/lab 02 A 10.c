#include <stdio.h>
int main ()
{
 int N, i, isprime = 1;
 printf("Enter a number: ");
 scanf("%d", &N);
 if (N < 2)
 {
   isprime = 0;
 }
 else
 {
   for(i = 2; i <= N / i; i++)
   {
     if(N % i ==0)
     {
       isprime = 0;
       break;
     }
   }
 }
 if (isprime == 1)
 {
   printf("Prime number");
 }
 else
 {
   printf("Not a prime number");
 }
 return 0;
}
