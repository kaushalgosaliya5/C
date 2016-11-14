# include <stdio.h>
void main()
{
  int age,weight;

  printf ("\n enter your age (18 to 55):");
  scanf ("%d",&age);

  printf ("\n enter your weight (45 to 100):");
  scanf ("%d",&weight);

  if ((age>=18 && age<=55)&&(weight >= 45&&weight <= 100))
  {
   printf ("\n this person is eligibal for blood doner ");
  }

  else
  {
   printf ("\n this person is not eligibal for blood doner");
  }

  scanf ("%d");
}