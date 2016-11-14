#include<stdio.h>
int x;
void main()
{
   int x;

   x = 15;
   ::x = 25;

   printf ("\n global variable x is :: %d",::x);
   printf ("\n local variable is :: %d",x);

 scanf("%d");
}