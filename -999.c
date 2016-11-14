#include<stdio.h>
void main()
{
  int no;
  FILE *fp;
  int even=0,odd=0;

  fp = fopen("e:\\ccc\\out-put\\-999.txt","w+b");

  printf("\n enter number press -999 to stop ::");

  printf("\n\n enter number ::");
  scanf ("%d",&no);

  while(no != -999)
   {
      if(no%2==0)
       {
         even++;
       }
      else
       {
         odd++;
       }

      printf("\n enter number ::");
      putw(no,fp);
      scanf("%d",&no);
   }


  rewind(fp);
                                   /*  fclose(fp);
 												 fp = fopen("e:\\ksl.txt","rb+");  */
  no=getw(fp);

  while(!feof(fp))
   {
     printf ("\t%d",no);
     no = getw(fp);
   }

  printf("\n odd number is :: %d",odd);
  printf("\n even numbe is :: %d",even); 

  fclose(fp);

  scanf ("%d");
}