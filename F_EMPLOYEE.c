#include<stdio.h>

struct emp
{
  char name[30];
  int age;
  long int sal;
};

void main()
{
   struct emp e[5];
   FILE *fp;
   int i;

   fp = fopen("e:\\ccc\\out-put\\F_EMPLOYEE.txt","wb");

   printf("\n enter employee data :: \n");

   for(i=0;i<5;i++)
    {
       scanf("\n%s\t%d\t%ld",e[i].name,&e[i].age,&e[i].sal);
       fwrite(&e,sizeof(e),5,fp);
    }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\F_EMPLOYEE.txt","rb");

   printf("\nname\tage\tpayment\n");

  for(i=0;i<5;i++)
   {
     fread(&e,sizeof(e),5,fp);
     printf("\n%s\t%d\t%ld",e[i].name,e[i].age,e[i].sal);
   }

   fclose(fp);
   scanf("%d");
}