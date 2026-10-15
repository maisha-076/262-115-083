#include <stdio.h>
int main()
{
 int N, count = 0;
 printf("Enter a number: ");
 scanf("%d", &N);
 if( N < 0)
 {
   N = -N;
 }
 do
 {
   count++;
   N = N / 10;
 }
 while(N != 0);
 printf("Number of digits = %d", count);
 return 0;
}
