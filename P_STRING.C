#include<stdio.h>
void display(char*);
void main()
{
  char ch[10];

  printf("\n enter your name :: ");
  scanf("%s",ch);

  display(ch);
}

void display(char *p)
{
  printf("\n your name is ::");

  while(*p != '\0')
  {
    printf("%c",*p);
    p++;
  }

  scanf("%d");
}