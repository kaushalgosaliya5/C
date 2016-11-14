# include <stdio.h>
void main()
{
  int cat;
  long unsigned int prem,carcost;              // cat = catagoury     // prem = premioum

  printf ("\n categoury : 1 premium is '2%' of car amount ");
  printf ("\n categoury : 2 premium is '3%' of car amount ");
  printf ("\n categoury : 3 premium is '5%' of car amount ");


  printf ("\n\n enter category :");
  scanf ("%d",&cat);

  printf ("\n enter your cat-amount :");
  scanf ("%lu",&carcost);

  if (cat == 1)
  {
    prem = carcost * 0.02;
  }
  else if (cat == 2)
  {
    prem = carcost * 0.03;
  }
  else if (cat ==3)
  {
    prem = carcost * 0.05;
  }
  else
  {
    printf ("your choice is not avilable");
  }
  printf ("\n\n your premioum is : %lu",prem);

  scanf ("%d");
}