#include<stdio.h>

struct book
 {
   char title[20];
   char author[20];
   char publisher[20];
   int year;
   int pages;
   int price;
 };

void main()
 {
    struct book x[3];
    int i;

    for(i=0;i<3;i++)
     {
       printf("\n enter name of title :: ");
       scanf("%s",x[i].title);

       printf("\n enter author name :: ");
       scanf("%s",x[i].author);

       printf("\n enter publisher :: ");
       scanf("%s",x[i].publisher);

       printf("\n enter publishing year :: ");
       scanf("%d",&x[i].year);

       printf("\n enter number of pages :: ");
       scanf("%d",&x[i].pages);

       printf("\n enter price :: ");
       scanf("%d",&x[i].price);
     }

    printf("\ntitle\tauthor\tpublisher\tyear\tpages\tprice");

    for(i=0;i<3;i++)
     {
       printf("\n%s\t%s\t%s\t%d\t%d\t%d",x[i].title,x[i].author,x[i].publisher,x[i].year,x[i].pages,x[i].price);
     }

  scanf("%d");
 }