#include<stdio.h>
void main()
{
  char file[20];
  FILE *fp;
  char ch;

  printf ("\n enter file name (full path) ::");
  scanf("%s",file);

  fp = fopen(file,"a");

   printf ("\n enter data (doller '$')::");
   ch=getchar();

   while(ch!='$')
    {
      fputc(ch,fp);
      ch=getchar();
    }

  fclose(fp);

  fp = fopen(file,"r");

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



