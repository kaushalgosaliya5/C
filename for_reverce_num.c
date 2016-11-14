# include <stdio.h>
void main()
{
  int num,rnum,r;

  printf ("\n this program is reverce number");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  for(rnum=0;num>0;rnum=rnum*10+r)
  while (num > 0)
  {
    r = num % 10;
    num = num /10;
  }

  printf ("\n reverce number is : %d",rnum);
  scanf ("%d");
}