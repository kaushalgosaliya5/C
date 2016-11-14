#include<stdio.h>
void main()
{
  FILE *fp;
  char file[20];
  char ch;

  printf("\n enter file name :: ");
  scanf("%s",file);

  fp = fopen(file,"r");

  while(!feof(fp))
  {
     ch=fgetc(fp);
     printf("%c",ch);
  }

  printf("\n your file size is :: %d",ftell(fp));

  fclose(fp);
  scanf("%d");
}