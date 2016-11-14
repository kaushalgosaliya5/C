#include<stdio.h>

void main()
{
  printf("\n %s \t",__DATE__);
  printf("\n %s \t",__TIME__);

  printf("\n %s \t",__FILE__);
 // #line 40
  printf("\n %s \t",__FILE__); // PLEASE  COMMENT DISTOYED

  scanf("%d");
}