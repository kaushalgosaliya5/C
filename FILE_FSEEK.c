#include<stdio.h>
void main()
{
  FILE *fp;
  char ch;

  fp = fopen("e:\\ccc\\out-put\\FILE_FSEEK.txt","w");

  printf("\n enter paregraph ::");
  ch = getchar();

  while(ch != EOF)                                    
   {
     fputc(ch,fp);
     ch = getchar();
   }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\FILE_FSEEK.txt","r");

  printf("\n start ::");

  while(!feof(fp))
   {
     fseek(fp,1,1);
     ch = fgetc(fp);
     printf("%c",ch);
   }

  fclose(fp);
  scanf("%d");
}