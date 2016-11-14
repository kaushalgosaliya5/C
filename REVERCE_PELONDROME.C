# include <stdio.h>
void main()
{
  int num,rnum,rem,onum;

  printf ("\n enter any number :");
  scanf ("%d",&num);

  onum = num;
  rnum = 0;

  while (num > 0)
  {
    rem = num % 10;
    num = num / 10;
    rnum = (rnum*10) + rem;
  }

 printf ("\n\n your reverce number is : %d",rnum);

 if (rnum==onum)
 {
   printf ("\n\n this number is pelendrome number ");
 }
 else
 {
   printf ("\n\n this number is not pelendrome number");
 }
 scanf ("%d");
}