# include <stdio.h>
void main()
{
  int num,rem,rnum;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  for (rnum = 0 ; num>0 ; num = num / 10)
  {
    rem = num % 10;
    rnum =  (rnum * 10) + rem;
  }

  printf ("\n your reverce  number is : %d",rnum);

  scanf ("%d");
}