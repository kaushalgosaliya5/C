# include <stdio.h>
void main()
{
  int  x=0,i,even=0,odd=0;

 printf ("\n this program is stop by enter number 999");

  for (i=0 ; x != 999 ; i++)

  {
    printf ("\n\n enter any number : ");
    scanf ("%d",&x);

    if(x % 2 == 0)
    {
       even++;
    }

    else
    {
      odd++;
    }
  }

  printf ("\n even num is : %d",even);

  printf ("\n\n odd num is : %d",odd-1);

 scanf ("%d");
}