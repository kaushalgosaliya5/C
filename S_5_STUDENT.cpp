#include<stdio.h>
struct stu
{
  int rollno;
  char name[10];
  int m[3];
  int total;
};

void main()
{
   struct stu x[3];
   int i,j;

   for(i=0;i<3;i++)
    {
      printf("\n enter roll no ::");
      scanf("%d",&x[i].rollno);

      printf("\n enter name :: ");
      scanf("%s",x[i].name);

      x[i].total = 0;

      for(j=0;j<3;j++)
       {
          printf("\n marks of sub ::");
          scanf("%d",&x[i].m[j]);
          x[i].total = x[i].total + x[i].m[j];
       }
    }

    printf("\nrollno\tname\ttotal");

    for(i=0;i<3;i++)
     {
       printf("\n%d\t%s\t%d",x[i].rollno,x[i].name,x[i].total);
     }

 scanf("%d");
}