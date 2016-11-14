#include<stdio.h>
void main()
{
  FILE *fp1,*fp2;
  char file1[10],file2[10];
  char ch;

  printf("\n enter your sorce file path :: ");
  scanf("%s",file1);

  printf("\n enter your destination file path ::");
  scanf("%s",file2);

  fp1 = fopen(file1,"r");
  fp2 = fopen(file2,"w+");

  while(!feof(fp1))
  {
    ch = fgetc(fp1);

    if(ch != ' ')
    {
      fputc(ch,fp2);
    }
    else
    {
       while(ch == ' ')
       {
         ch = fgetc(fp1);
       }
       fputc(' ',fp2);
       fputc(ch,fp2);
    }
  }

  fclose(fp1);
  rewind(fp2);

  while(!feof(fp2))
  {
    ch = fgetc(fp2);
    printf("%c",ch);
  }


  fcloseall();
  scanf("%d");
}