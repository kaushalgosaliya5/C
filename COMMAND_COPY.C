#include<stdio.h>

void main(int argc,char *argv[])
{
  FILE *sor,*des;
  char ch;

  if(argc != 3)
  {
    printf("\n INSUFFICENT ARGUMENT ");
    return;
  }

 sor = fopen(argv[1],"r");
 des = fopen(argv[2],"w");

 if(sor == NULL)
 {
   printf("%s file does not exit ",argv[1]);
   return;
 }

 while(!feof(sor))
 {
   ch = fgetc(sor);
    printf("%c",ch);
   fputc(ch,des);
 }

 fclose(sor);
 fclose(des);
}
