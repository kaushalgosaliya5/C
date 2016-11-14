# include <stdio.h>
void main()
{
  int age,weight;

  printf ("\n enter your age :");
  scanf ("%d",&age);

  printf ("\n enter your weight :");
  scanf ("%d",&weight);

  (age>18&&age<55&&weight>45&&weight<100) ? printf ("\n this person is blood doner") : printf ("\n this person is not blood doner");

  scanf ("%d");
}