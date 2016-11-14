#include<stdio.h>
int fact(int);
void main()
{
  int num,f;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  f = fact(num);

  printf ("\n factorial is : %d",f);
  scanf ("%d");
}

int fact(int n)
{
   if (n == 1)
    {
      return 1;
    }

   else
   {
     return n * fact(n-1);
   }
}
