#include<stdio.h>

 struct item
  {
    int code;
    char name[10];
    int price;
  };

 int prc(int);

void main()
 {
    struct item x[3];
    int i;

    for(i=0;i<3;i++)
     {
       printf("\n enter item code :: ");
       scanf("%d",&x[i].code);

       printf("\n enter item name :: ");
       scanf("%s",x[i].name);

       printf("\n enter item price :: ");
       scanf("%d",&x[i].price);
     }

    printf("\ncode\tname\tprice");

    for(i=0;i<3;i++)
    {
      x[i].price = prc(x[i].price);
      printf("\n%d\t%s\t%d",x[i].code,x[i].name,x[i].price);
    }
    scanf("%d");
 }

 int prc(int p)
  {
     return p + (p * 0.1);
  }