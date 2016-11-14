#include<stdio.h>
int palin(int);
void main()
{
  int x;

  printf ("\n enter any number :: ");
  scanf ("%d",&x);

  x = palin(x);

  if (x == 1)
   {
      printf ("\n this num palindrome");
   }
  else
  {
    printf ("\n this num is not palindrome");
  }

  scanf ("%d");
}

int palin(int num)
 {
    int rnum,rem,onum;

    onum = num;
    rnum = 0;

    while(num > 0)
     {
       rem = num % 10;
       num = num / 10;
       rnum = rnum * 10 + rem;
     }

   if (onum == rnum)
    {
      return 1;
    }
   else
   {
     return 0;
   }
   scanf ("%d");
 }