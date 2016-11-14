#include<stdio.h>
void main()
{
   FILE *fp;
   char ch;

   fp = fopen("e:\\ccc\\out-put\\FILE_FTELL.txt","w+");

   printf("\n enter paregraph :: ");
   ch = getchar();

   while(ch != EOF)
    {
       fputc(ch,fp);
       ch = getchar();
    }

   fclose(fp);

   fp = fopen("e:\\ccc\\out-put\\FILE_FTELL.txt","r");

   while(!feof(fp))
    {
      ch = fgetc(fp);
      printf("\n %c",ch);
      printf("\t %d",ftell(fp));
    }

   printf("\n your ftell is :: ");
   printf("%d",ftell(fp));

   fclose(fp);


   scanf("%d");
}
