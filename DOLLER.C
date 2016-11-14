#include<stdio.h>
void main()
{
   char ch;
   FILE *fp;

   int i=0;

   fp = fopen("e:\\ccc\\out-put\\DOLLER.txt","w");

   printf ("\n enter paregraph :: DOLLER :: ");
   ch = getchar();

   while(ch != '$')
    {
      fputc(ch,fp);
      ch = getchar();
    }

   fclose(fp);

   fp = fopen("e:\\ccc\\out-put\\DOLLER.txt","r");

   if(fp == NULL)
   {
      printf ("\n THIS PAREGRAPH IS NULL ");
   }

   ch = fgetc(fp);

   while(ch != EOF)
   {
     if (ch != '\n' && ch != ' ')
      {
        i++;
      }

     printf ("%c",ch);
     ch = fgetc(fp);
   }

  printf ("\n\n TOTAL CHARECTER IS : %d",i);

  fclose(fp);
  scanf ("%d");
}