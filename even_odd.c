#include<stdio.h>
int evn_odd(int);
void main()
{
  int num,ans;

  printf ("\n enter any number ::");
  scanf ("%d",&num);

  ans = evn_odd(num);

  if (ans == 1)
   {
     printf ("\n this num is even");
   }

  else
  {
    printf ("\n this num is odd");
  }
  scanf ("%d");
}

int evn_odd(int p)
{
   if (p % 2 == 0)
    {
      return 1;
    }
   else
   {
     return 0;
   }
}