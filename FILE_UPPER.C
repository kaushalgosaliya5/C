#include<stdio.h>
#include<ctype.h>

void main()
{
  FILE *fp;
  char file[20];
  char ch;
  int k;

  printf("\n enter file path :: ");
  scanf("%s",file);

  fp = fopen(file,"r");

  if(fp == NULL)
  {
    printf("\n your file is empty");
  }

  printf("\n your file contenet uppercase :: ");
  while(!feof(fp))
   {
      ch = fgetc(fp);

      k = isalpha(ch);

      if(k == 256)
      {
        ch = toupper(ch);
      }
      printf("%c",ch);
   }

  fclose(fp);
  scanf("%d");
}