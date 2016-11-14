# include <stdio.h>
void main()
{
  int num,i=2,logic=1;

  printf ("\n this program is prime num & not prime number");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  while  ( i < num )
  {
    if ( num % i == 0 )
    {
     logic = 0;
     break;
    }
    i++;
  }

 if (logic == 1)
 {
   printf ("\n given number is prime number : %d",num);
 }
 else
 {
  printf ("\n given number is not prime number : %d",num);
 }
 scanf ("%d");
}