#include<stdio.h>

struct emp
{
  char name[30];
  int age;
  long int sal;
};

void main()
{
  struct emp e[3];
  FILE *fp,*fpg,*fpl;
  int i;

  fp = fopen("e:\\ccc\\out-put\\1.txt","w");

  printf("\nname\tage\tsallary\n");

  for(i=0;i<3;i++)
  {
    scanf("%s\t%d\t%ld",e[i].name,&e[i].age,&e[i].sal);
    fwrite(&e,sizeof(e),1,fp);
  }

  fclose(fp);

  fp = fopen("e:\\ccc\\out-put\\1.txt","r");
  fpg = fopen("e:\\ccc\\out-put\\2.txt","w");
  fpl = fopen("e:\\ccc\\out-put\\3.txt","w");

   for(i=0;i<3;i++)
   {

     fread(&e,sizeof(e),1,fp);

     if(e[i].age >= 35 )
      {
        fwrite(&e,sizeof(e),1,fpg);
      }
     else
      {
        fwrite(&e,sizeof(e),1,fpl);
      }
   }

 /* fclose(fp);
  fclose(fpg);
  fclose(fpl);
 */

 fcloseall();
 
  scanf("%d");
}