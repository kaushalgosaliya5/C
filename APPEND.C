#include<stdio.h>
void main()
{
  char ch;

  FILE *fp;

  fp = fopen("e:\\ccc\\out-put\\APPEND.txt","a");

   printf ("\n enter data ::");
   ch=getchar();

   while(ch!='$')
    {
      fputc(ch,fp);
      ch=getchar();
    }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\APPEND.txt","r");

  if(fp==NULL)
  {
     printf ("\n your data is empty");
  }

  ch=fgetc(fp);

  while(!feof(fp))   /*  **   !feof(fp)  *** */
   {
     printf("%c",ch);
     ch=fgetc(fp);
   }
   
  fclose(fp);
  
  scanf("%d");
}