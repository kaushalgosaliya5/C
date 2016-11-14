#include<stdio.h>
#include<string.h>
struct dic
{
  char name[10];
  char sname[10];
  char city[10];
  long phone;
};

void main()
{
  FILE *fp;
  struct dic x;
  char ch[10];
  int i;
  int k;

  fp = fopen("e:\\CCC\\OUT-PUT\\FILE_CITY.dat","w+");

  printf("\n name \t surname \t city \t phone.no \n");

  for(i=0;i<3;i++)
  {
    scanf("\n%s\t%s\t%s\t%ld",x.name,x.sname,x.city,&x.phone);
    fwrite(&x,sizeof(x),1,fp);
  }

  rewind(fp);

  printf("\n enter your  choice city :: ");
  scanf("%s",ch);

  printf("\n name \t surname \t city \t phone.no \n");

  while(!feof(fp))
  {

    fread(&x,sizeof(x),1,fp);

    k = strcmp(x.city,ch);

    if(k == 0)
    {
      printf("\n %s \t %s \t %s \t  %ld",x.name,x.sname,x.city,x.phone);
      break;
    }
  }

  fclose(fp);
  scanf("%d");
}
