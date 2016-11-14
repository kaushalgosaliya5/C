# include <stdio.h>
void main()
{
  int num,rnum=0,;

  printf ("\n this program is reverce number");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  while (num > 0)
  {
    r = num % 10;
    num = num / 10;
    rnum = rnum * 10 + r;
  }

  printf ("\n reverce number is : %d",rnum);
  scanf ("%d");
}