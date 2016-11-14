# include <stdio.h>
void main()
{
  int num,i,logic;

  printf ("\n this program is prime num & not prime number");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  for(i=2,logic=1;i<num;i++)
  {
    if ( num % i == 0 )
    {
     logic = 0;
     break;
    }
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