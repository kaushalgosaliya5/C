#include<stdio.h>

 struct state
 {
   char name[20];
   int districts;
   long int population;
 };

void main()
{
   struct state x[3];
   int i;

   for(i=0;i<3;i++)
    {
      printf("\n enter state name ::");
      scanf("%s",x[i].name);

      printf("\n enter number of disticts ::");
      scanf("%d",&x[i].districts);

      printf("\n enter total population :: ");
      scanf("%ld",&x[i].population);
    }

   printf("\nname\t\tdistricts\t\tpopulation");

   for(i=0;i<3;i++)
    {
      printf("\n%s\t\t%d\t\t%ld",x[i].name,x[i].districts,x[i].population);
    }

   scanf("%d");
}