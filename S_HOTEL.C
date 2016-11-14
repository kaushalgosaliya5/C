#include<stdio.h>

struct hotel
 {
    char name[10];
    char add[10];
    int grade;
    int roomcharges;
    int rooms;
 };

void main()
{
   struct hotel x[3];
   int i,amt;

   for(i=0;i<3;i++)
    {
       printf("\n enter hotel name :: ");
       scanf("%s",x[i].name);

       printf("\n enter hotel address :: ");
       scanf("%s",x[i].add);

       printf("\n enter hotel grade (1 to 5) :: ");
       scanf("%d",&x[i].grade);

       printf("\n enter hotel roomcharges :: ");
       scanf("%d",&x[i].roomcharges);

       printf("\n enter hotel rooms :: ");
       scanf("%d",&x[i].rooms);
    }

    printf("\n enter your required AMOUNT :: ");
    scanf("%d",&amt);

    printf("\nname\taddress\tgrade\tcharges\trooms");

    for(i=0;i<3;i++)
    {
      if(x[i].roomcharges < amt)
       {
         printf("\n%s\t%s\t%d\t%d\t%d",x[i].name,x[i].add,x[i].grade,x[i].roomcharges,x[i].rooms);
       }
    }
   scanf("%d");
}