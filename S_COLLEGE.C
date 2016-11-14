#include<stdio.h>

struct college
{
  char name[20];
  int univercity;
  int engineering;
  int medical;
  int managment;
  int total;
};

void main()
{
  struct college x[5];
  int i,j,max=0;


  for(i=0;i<3;i++)
    {
       printf("\n enter state name :: ");
       scanf("%s",x[i].name);

       printf("\n enter engineering college :: ");
       scanf("%d",&x[i].engineering);

       printf("\n enter madical college ::");
       scanf("%d",&x[i].medical);

       printf("\n enter managment college :: ");
       scanf("%d",&x[i].managment);


       printf("\n enter total univercity  ::");
       scanf("%d",&x[i].univercity);

      x[i].total = x[i].engineering + x[i].medical + x[i].managment;

      if(max < x[i].total)
        {
          max = x[i].total;
          j = i;
        }
     }

   printf("\nname\ttotal");
   printf("\n%s\t%d",x[j].name,max);

  scanf("%d");
}