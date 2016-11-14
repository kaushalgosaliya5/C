#include<stdio.h>
void setval1();
void setval2();
int x;  // x is a global variable
void main()
{
   x = 5;
   printf ("\n value of x is : %d",x);
   setval1();
   printf ("\n value of x is : %d",x);
   setval2();
   printf ("\n value of x is : %d",x);
   scanf ("%d");
}

void setval1()
{
   x = 10;
}

void setval2()
{
   x = 20;
}