#include<stdio.h>
void main()
{
   char ch;
   FILE *fp;

   fp = fopen("e:\\ccc\\out-put\\ABC.txt","w");

   ch = 'a';
   fputc(ch,fp);
   ch = 'b';
   fputc(ch,fp);
   ch = 'c';
   fputc(ch,fp);

   fclose(fp);

   fp = fopen("e:\\ccc\\out-put\\ABC.txt","r");

   printf ("%c",fgetc(fp));
   printf ("%c",fgetc(fp));
   printf ("%c",fgetc(fp));

   fclose(fp);
   scanf ("%d");
}