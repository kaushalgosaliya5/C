# include <stdio.h>
void main()
{
  char gender;
  long unsigned int amt;

  printf ("\n enter your gender ('M'-'m' & 'F'-'f') :");
  scanf ("%c",&gender);

  printf ("\n enter your amount income :");
  scanf ("%lu",&amt);

  if (gender == 'M' || gender == 'm')
  {
    if (amt > 150000)
    {
      printf ("\n taxable");
    }
    else
    {
      printf ("\n not taxable");
    }
  }
 else
 {
   if (amt >180000)
   {
     printf ("\n taxable");
   }
   else
   {
     printf ("\n not taxable");
   }
 }

 scanf ("%d");
}