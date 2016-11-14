#include<stdio.h>
int chkprime(int);
void main()
{
  int num,ans;

  printf ("\n enter number :");
  scanf ("%d",&num);

  ans = chkprime(num);

  if (ans == 1)
   {
      printf ("\n given number is prime : %d",num);
   }

   else
   {
      printf ("\n given number is not prime : %d",num);
   }
   scanf ("%d");
}

int chkprime(int num)
{
   int logic=1,i;

   i = 2;

   while (i < num)
   {
     if (num % i == 0)
     {
        logic = 0;
        break;
     }
    i++;
   }
  return logic;
}