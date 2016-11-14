#include<stdio.h>

void main()
{
  FILE *fp;
  char ch;
  int a=0,b=1,c=0;
  char file[10];

  printf("\n enter file name :: ");
  scanf("%s",file);

  fp = fopen(file,"r");

  if(fp == NULL)
  {
    printf("\n your file is empty");
    return;
  }

  while(!feof(fp))
  {
     ch = fgetc(fp);

     printf("%c",ch);

     if(ch == ' ')
     {
       a++;
     }
    else if(ch == '\n')
     {
        b++;
     }
    else
     {
        c++;
     }

  }

  printf("\n your paregraph total charecter is :: %d",c-1);
  printf("\n your paregraph in  space is :: %d",a);
  printf("\n your paregraph line is :: %d",b);

  fclose(fp);
  scanf("%d");
}