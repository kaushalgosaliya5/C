#include<stdio.h>
void main()
{
  int i;
  FILE *fp;
  char line[30];

  fp = fopen("e:\\ccc\\out-put\\LINE.txt","w+");

  printf("\n enter paregraph of 5 line ::\n\t");
  for(i=0;i<5;i++)
   {
     scanf("%s",line);
     fprintf(fp,"\n%s",line);
   }

  rewind(fp);

  printf("\n your paregraph is ::\n");

  while(!feof(fp))
   {
      fscanf(fp,"%s",line);
      printf("\n%s",line);
   }

   fclose(fp);
  scanf("%d");
}






