# include <stdio.h>
void main()
{
  int year;

  printf ("\n enter your year :");
  scanf  ("%d",&year);

  if ((year>=18)&&(year<=100))
  {
    printf ("\n thease  year is votting year",year);
  }

  else
  {
    printf ("\n thease year is not votting year",year);
  }
  scanf ("%d");
}