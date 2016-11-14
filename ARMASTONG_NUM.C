# include <stdio.h>
void main()
{
   int num,quib,sum,rem,onum;

   printf ("\n enter  any number :");
   scanf ("%d",&num);

   onum = num;
   sum = 0;
   
   while (num > 0)
   {
      rem = num % 10;
      quib = rem * rem * rem;
      sum = sum + quib;
      num = num /10;
   }

  if (onum==sum)
  {
    printf ("\n this number is 'ARMSTRONG' number : %d",onum);
  }
  else
  {
    printf ("\n this number is NOT 'ARMSTRONG' number : %d",onum);
  }
  scanf ("%d");
}