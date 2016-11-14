#include<stdio.h>
void main()
{
   char ch;
   FILE *fp;
   int i=0;

   fp = fopen("e:\\ccc\\out-put\\PAREGRAPH.txt","r");

   if(fp == NULL)
    {
      printf ("\n file not exits ");
    }

   ch = fgetc(fp);

   while(ch != EOF)
    {
      if(ch != ' ' && ch != '\n')
       {
      		i++;
       }
      printf ("%c",ch);
      ch = fgetc(fp);
    }

   printf ("\n\n\n charecter is :: %d",i);
  fclose(fp);
  scanf ("%d");
}