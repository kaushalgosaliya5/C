#include<stdio.h>
void main()
{
  FILE *fp;
  int i;

  fp = fopen("e:\\ccc\\out-put\\1_to_100.txt","wb");

  for(i=1;i<=100;i++)
  {
     printf("\t%d",i);
     putw(i,fp);
  }

  fclose(fp);
  scanf("%d");
}
