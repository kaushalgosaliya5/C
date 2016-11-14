#include<stdio.h>
void main()
{
  char ch;
  FILE *fp;

  fp = fopen("e:\\ccc\\out-put\\PAREGRAPH.txt","w");

  printf("\n ENTER STRING :: ");
  ch = getchar();

  while(ch != EOF)
   {
      fputc(ch,fp);
      ch = getchar();
   }

   fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\PAREGRAPH.txt","r");

  ch = fgetc(fp);

  while(ch != EOF)
   {
     printf("%c",ch);
     ch = fgetc(fp);
   }

  fclose(fp);
  scanf("%d");
}