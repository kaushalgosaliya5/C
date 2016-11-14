#include<stdio.h>
void function2(void)
{
  printf ("\n you are in function 2");
}
void function1(void)
{
  printf ("\n you are in function 1");
  function2();
  printf ("\n you are back function 1");
}
void main()
{
  printf ("\n you are in main");
  function1();
  printf ("\n you are back main");
  scanf ("%d");
}
