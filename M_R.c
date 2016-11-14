# include <stdio.h>
void main()
{
  long int sale,bas,hra,cov,da,netsal;            // netsal = netsallary
  float ince,bonus;                               //bas=basic          // sale =sales

  printf ("\n enter sales :");
  scanf ("%d",&sale);

  bas = 3000;
  hra = 600;
  da = (bas * 110) / 100;
  cov = 500;

  if (sale < 100000)
  {
     ince = (sale * 5) / 100;
     bonus = 200;
  }
  else
  {
     ince = (sale * 10) / 100;
     bonus = 500;
  }

 netsal =  bas + hra + da + cov + ince + bonus ;

 printf ("\n enter your netsal : %d",netsal);

 scanf ("%d");
}