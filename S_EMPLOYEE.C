#include<stdio.h>                                                                                                                                               `
#include<string.h>
struct emp
{
  char name[20];
  long int payment;
  long int dearness;
  long int rent;
  long int sal;
};

void main()
{
   struct emp x[5];
   int i,j,tmp;
   char k[30];

   for(i=0;i<5;i++)
   {
     printf("\n enter employee name :: ");
     scanf("%s",x[i].name);

     printf("\n enter employee basic payment :: ");
     scanf("%ld",&x[i].payment);

     printf("\n enter employee dearness allowance :: ");
     scanf("%ld",&x[i].dearness);

     printf("\n enter employee house rent :: ");
     scanf("%ld",&x[i].rent);

     x[i].sal = x[i].payment + x[i].dearness + x[i].rent;
   }

   for(i=0;i<=3;i++)
   {
     for(j=0;j<=3-i;j++)
      {
        if(x[j].sal < x[j+1].sal)
         {
            tmp = x[j].sal;
            strcpy(k,x[j].name);
            x[j].sal = x[j+1].sal;
            strcpy(x[j].name,x[j+1].name);
            x[j+1].sal = tmp;
            strcpy(x[j+1].name,k);
         }
      }
   }

  printf("\nname\tpayment");

  for(i=0;i<5;i++)
   {
     printf("\n%s\t%ld",x[i].name,x[i].sal);
   }

   scanf("%d");
}