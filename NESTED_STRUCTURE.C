#include<stdio.h>

struct emp
{
   int code;
   char name[20];

   struct date
    {
       int dd;
       int mm;
       int yy;
    }dob,doj;
};

void main()
{
  struct emp x[2];
  int i;

  for(i=0;i<2;i++)
  {
    printf("\n enter employee code :: ");
    scanf("%d",&x[i].code);

    printf("\n enter employee name :: ");
    scanf("%s",x[i].name);

    printf("\n enter employee date of birthday :: ");
    scanf("%d%d%d",&x[i].dob.dd,&x[i].dob.mm,&x[i].dob.yy);

    printf("\n enter employee date of join :: ");
    scanf("%d%d%d",&x[i].doj.dd,&x[i].doj.mm,&x[i].doj.yy);
  }

  printf("\ncode\tname\tbirth\tjoin\n");

  for(i=0;i<2;i++)
  {
    printf("\n%d\t%s\t%d-%d-%d\t%d-%d-%d",x[i].code,x[i].name,x[i].dob,x[i].doj);
  }

  scanf("%d");
}