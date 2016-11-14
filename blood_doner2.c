# include <stdio.h>
void main()
{
  int age,weight;

  printf ("\n enter your age :");
  scanf ("%d",&age);

  printf ("\n enter your weight :");
  scanf ("%d",&weight);

 if (age < 18)
 {
   printf ("\n not elighible ");
 }
 else if (age > 55)
 {
   printf ("\n not elighible ");
 }
 else
 {
    if (weight > 100)
    {
     printf ("\n not elighible ");
    }
   else if (weight < 45)
   {
    printf ("\n not elighible ");
   }
   else
   {
     printf ("\n this person is eligible");
   }
 }
  scanf ("%d");
}