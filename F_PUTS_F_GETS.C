#include<stdio.h>
void main()
{
  char name[30];
  FILE *fp;
  int i;

  fp = fopen("e:\\ccc\\out-put\\F_PUTS_F_GETS.txt","w");

  printf("\n enter name :: ");

  for(i=0;i<5;i++)
   {
     scanf("%s",name);
     fputs(name,fp);
   }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\F_PUTS_F_GETS.txt","r");

  while(!feof(fp))
   {
     fgets(name,30,fp);
     printf("%s",name);
   }

   fclose(fp);

   scanf("%d");
}
