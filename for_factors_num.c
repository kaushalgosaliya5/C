# include <stdio.h>
void main()
{
  int num,i=1;

  printf ("\n this program is factorial for number");

  printf ("\n enter any number :");
  scanf ("%d",&num);

  for( i = 1 ; i <= num ; i++)
  {
   if ( num % i  == 0 )
    {
     printf ("\t %d \n",i);
    }
  }
  scanf ("%d");
}