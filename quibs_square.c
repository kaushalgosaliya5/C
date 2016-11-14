# include <stdio.h>
void main()
{

  unsigned long int num,quib,square;

  printf ("\n enter any number :");
  scanf ("%lu",&num);

  square = num * num;
  quib = num * num * num;

  printf ("\n this number %lu square is : %lu",num,square);
  printf ("\n\n this number %lu quib is : %lu",num,quib);

 scanf ("%lu");

}