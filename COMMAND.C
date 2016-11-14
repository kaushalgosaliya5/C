#include<stdio.h>

void main(int argc,char *argv[])
{
  FILE *fp;
  char tmp[80];
  int i;

  if(argc > 1)
   {
      fp = fopen(argv[1],"w");
   }

  for(i=2;i<argc;i++)
  {
     fprintf(fp,"%s",argv[i]);
  }

 fclose(fp);

 fp = fopen(argv[1],"r");

 while(!feof(fp))
 {
   fscanf(fp,"%s",tmp);
   printf("%s",tmp);
 }

 fclose(fp);
 scanf("%d");
}
