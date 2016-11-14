#include<stdio.h>

struct emp
{
  char name[10];
  long int pay;
  long int dearness;
  long int rent;
  long int net;
}k;

void main()
{
  struct emp x[3];
  int i,j;

  for(i=0;i<3;i++)
  {
    printf("\n employee name :: ");
    scanf("%s",x[i].name);

    printf("\n enter payment :: ");
    scanf("%ld",&x[i].pay);

    printf("\n employee dearness :: ");
    scanf("%ld",&x[i].dearness);

    printf("\n enter rent :: ");
    scanf("%ld",&x[i].rent);

    x[i].net = x[i].pay+x[i].dearness+x[i].rent;

    printf("\n enter net :: %ld",x[i].net);
  }

  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1-i;j++)
    {
    if(x[j+1].net > x[j].net)
     {
        k = x[j];
        x[j] = x[j+1];
        x[j+1] = k;
     }
    }
  }

  for(i=0;i<3;i++)
   {
     printf("\n%s \t %d \t %d \t %d \t %d",x[i].name,x[i].pay,x[i].dearness,x[i].rent,x[i].net);
   }

  scanf("%d");
}
