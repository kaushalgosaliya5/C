#include<stdio.h>

struct population
{
  char name[20];
  long int population;
  int literacy;
  int capita;
};

void main()
{
   struct population  x[3];
   int i,m,n,max1,max2;

   for(i=0;i<3;i++)
   {
     printf("\n enter state name :: ");
     scanf("%s",x[i].name);

     printf("\n enter population :: ");
     scanf("%ld",&x[i].population);

     printf("\n enter literacy (educated person) rate :: ");
     scanf("%d",&x[i].literacy);

     printf("\n enter capita income :: ");
     scanf("%d",&x[i].capita);

   }

   max1 = x[0].literacy;
   max2 = x[0].capita;

   for(i=1;i<3;i++)
   {
     if(x[i].literacy > max1)
      {
        max1 = x[i].literacy;
        m = i;
      }

     if(x[i].capita > max2)
     {
       max2 = x[i].capita;
       n = i;
     }
   }

  printf("\nstate\tpopulation\tliteracy");
  printf("\n%s\t%ld\t%d",x[m].name,x[m].population,max1);

  printf("\nstate\tpopulation\tcapita_income");
  printf("\n%s\t%ld\t%d",x[n].name,x[n].population,max2);

  scanf("%d");
}