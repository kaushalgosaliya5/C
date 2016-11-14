#include<stdio.h>
void main()
{
  FILE *fp;
  char ch;

  fp = fopen("e:\\ccc\\out-put\\F_REVERCE.txt","w");

  printf("\n enter paregraph :: ");
  ch = getchar();

  while(ch != EOF)
  {
    fputc(ch,fp);
    ch = getchar();
  }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\F_REVERCE.txt","r");

  fseek(fp,-1,2);

  while(!feof(fp))
  {
    printf("%c",ch);
    fseek(fp,-2,1);
    ch = fgetc(fp);
  }

  fclose(fp);
  scanf("%d");
}