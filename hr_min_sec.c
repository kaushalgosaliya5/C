# include <stdio.h>
void main()
{
  int hr,min,sec;

  printf ("\n this program show by hr,min,sec");

  printf ("\n enter any second :");
  scanf ("%d",&sec);

  hr = sec / 3600;

  printf ("\n hr is : %d",hr);

  sec =  sec - (hr*3600);
  min = sec / 60;

  printf ("\n minute is : %d",min);

  sec = sec - ( min * 60 );

  printf ("\n second is : %d",sec);

  printf ("\n\n\t\t time is : %d : %d : %d",hr,min,sec);
  scanf ("%d");
}