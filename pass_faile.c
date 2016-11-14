# include <stdio.h>
void main()
{
  int m;

  printf ("\n enter your marks :");
  scanf ("%d",&m);

  if (m >= 75)
  {
    printf ("\n this mark is dictintion");
  }
  else if ( m >= 60)
  {
    printf ("\n this mark is greade 'A' ");
  }
  else if (m >= 50)
  {
    printf ("\n this mark is greade 'B'");
  }
  else if (m >= 35)
  {
   printf ("\n this mark is greade 'C'");
  }
  else
  {
    printf ("\n this mark  is faile ");
  }

  scanf ("%d");
}