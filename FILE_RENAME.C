#include<stdio.h>
void main()
{
  char old[30],f_new[30];

  printf("\n enter old file patha and name ::  ");
  scanf("%s",old);

  printf("\n enter new file patha and name ::  ");
  scanf("%s",f_new);

  rename(old,f_new);
  scanf("%d");
}