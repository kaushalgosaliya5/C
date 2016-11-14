#include<stdio.h>
void main()
{
  FILE *fp;
  char name[30];
  int age,i;

  fp = fopen("e:\\ccc\\out-put\\studentname_age.txt","w+");

  printf("\n NAME   AGE \n");
  for(i=0;i<5;i++)
   {
     scanf("%s %d",name,&age);
     fprintf(fp,"%s %d",name,age);
   }

  rewind(fp);
  printf("\n\n NAME   AGE");
  while(!feof(fp))
   {
     fscanf(fp,"%s  %d",name,&age);
     printf("\n %s  %d",name,age);
   }

  fclose(fp);
  scanf("%d");
}