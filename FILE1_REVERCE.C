#include<stdio.h>
void main()
{
  FILE *fpr,*fpw;
  char ch;
  char file1[20],file2[20];

  printf("\n enter sourse file name :: ");
  scanf("%s",file1);

  printf("\n enter destination file name :: ");
  scanf("%s",file2);

  fpr = fopen(file1,"r");
  fpw = fopen(file2,"w");

  fseek(fpr,-1,2);
  ch = fgetc(fpr);

  while(ch != EOF)
  {
    fputc(ch,fpw);
       printf("%c",ch);
    fseek(fpr,-2,1);
    ch = fgetc(fpr);
  }

  fcloseall();
  scanf("%d");
}