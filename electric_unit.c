# include <stdio.h>
void main()
{
  int lastr,correntr,dif;          //lastr = lastreading     corrntr = correntreading
  float bamt;

  printf ("\n enter your last reading unit :");
  scanf ("%d",&lastr);

  printf ("\n enter your corrent reading  unit :");
  scanf ("%d",&correntr);

  dif = correntr - lastr;                 //dif = difference

  if (dif  < 100)
  {
    bamt = dif * 1.5;
  }
  else if (dif < 200)
  {
    bamt = dif * 2.5;
  }
  else if (dif < 300)
  {
    bamt = dif * 3.5;
  }
 else
 {
   bamt = dif * 4.5;
 }

 printf ("\n your basic amount is : %.2f",bamt);

 scanf ("%d");
}