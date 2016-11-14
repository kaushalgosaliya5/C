#include<stdio.h>

struct population
{
  char name[20];
  long int men;
  long int women;
  long int total;
};

void main()
{
  struct population x[5];
  int i;

  for(i=0;i<5;i++)
  {
     printf("\n enter state name :: ");
     scanf("%s",x[i].name);

     printf("\n enter total men :: ");
     scanf("%ld",&x[i].men);

     printf("\n enter total women :: ");
     scanf("%ld",&x[i].women);

     x[i].total = x[i].men + x[i].women;
  }


  printf("\nstate\tpopulation");

  for(i=0;i<5;i++)
  {
    printf("\n%s\t%ld",x[i].name,x[i].total);
  }

 scanf("%d");
}