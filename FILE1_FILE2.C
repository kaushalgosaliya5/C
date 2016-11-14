#include<stdio.h>

struct app
{
  int no;
  char acc[10];    // acc = account type
  long bal; // bal = balance
};

void main()
{
   struct app x;
   FILE *fp1,*fp2;
   int i;

   fp1 = fopen("e:\\ccc\\out-put\\file1.txt","w");

   printf("\n first file :: \n");
   printf("\n cust.no \t accountType \t balance \n");

   for(i=0;i<3;i++)
   {
      scanf("%d \t %s \t %ld",&x.no,x.acc,&x.bal);
      fwrite(&x,sizeof(x),1,fp1);
   }

   fclose(fp1);

   printf("\n second file :: \n");
   printf("\n cust.no \t accountType \t balance \n");

   fp1 = fopen("e:\\ccc\\out-put\\file1.txt","r");
   fp2 = fopen("e:\\ccc\\out-put\\file2.txt","w+");

   for(i=0;i<3;i++)
   {
     scanf("%d \t %s \t %d",&x.no,x.acc,&x.bal);
     fwrite(&x,sizeof(x),1,fp2);
   }

   for(i=0;i<3;i++)
   {
     fread(&x,sizeof(x),1,fp1);
     fwrite(&x,sizeof(x),1,fp2);
   }

  fclose(fp1);
  rewind(fp2);

 printf("\n cust.no \t accountType \t balance \n");

  while(!feof(fp2))
  {
     fread(&x,sizeof(x),1,fp2);
     printf("\n%d \t %s \t %d",x.no,x.acc,x.bal);
  }

  fcloseall();
  scanf("%d");
}
