#include<stdio.h>
void main()
{
  int no;
  FILE *fp;
  int rem,rnum;
  fp = fopen("e:\\ccc\\out-put\\FILE_REVERSE.txt","w+");

  printf("\n enter number ::");
  scanf("%d",&no);

  while(no != -999)
   {
     putw(no,fp);
     printf("\n enter number ::");
     scanf("%d",&no);
   }

   fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\FILE_REVERSE.txt","r+");

   printf("\n your reverse num is ::\n");

   while(!feof(fp))
    {
       no = getw(fp);
       rnum = 0;
       
       while(no > 0)
        {
          rem = no % 10;
          no = no / 10;
          rnum = rnum * 10 + rem;
        }
        printf("\t %d",rnum);
    }

 fcloseall(); // fclose(fp);
  scanf("%d");
}