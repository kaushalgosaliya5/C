# include <stdio.h>
void main()
{
  float fer,cel;       // fer = feranheat    cel = celsious

  printf ("\n enter feranheat :");
  scanf ("%f",&fer);

  cel = (( fer - 32 ) * 5 ) / 9;

  printf ("\n your convert by celsious is :%f",cel);
  scanf ("%f");

}