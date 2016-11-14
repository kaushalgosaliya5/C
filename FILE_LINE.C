#include<stdio.h>
void main()
{
   FILE *fpr1,*fpr2,*fpw;
   char ch;
   int i=1;
   char file1[20],file2[20],file3[20];

   printf("\n enter file name destination file :: ");
   scanf("%s",file3);

   printf("\n enter sorce file 1 path :: ");
   scanf("%s",file1);

   printf("\n enter sorce file 2 path :: ");
   scanf("%s",file2);

   fpw  = fopen(file3,"w");
   fpr1 = fopen(file1,"r");
   fpr2 = fopen(file2,"r");

   printf("%d..",i);

   while(!feof(fpr1))
   {
     ch = fgetc(fpr1);
     fputc(ch,fpw);
     printf("%c",ch);

     if(ch == '\n')
     {
        i++;
        printf("\n%d..",i);
     }
   }

   printf("\n");
   printf("\n%d..",++i);

   while(!feof(fpr2))
   {
     ch = fgetc(fpr2);
     fputc(ch,fpw);
     printf("%c",ch);

     if(ch == '\n')
     {
        i++;
        printf("\n%d..",i);
     }
   }

  fcloseall();
  scanf("%d");
}