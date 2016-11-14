#include<stdio.h>

struct date
{
  int dd;
  int mm;
  int yy;
};

void display(struct date);

void main()
 {
   struct date d1,d2;
   int yr;

   printf("\n enter year for both the date :: ");
   scanf("%d",&yr);

   d1.yy = yr;
   d2.yy = yr;

   printf("\n enter mm and dd for date 1 :: ");
   scanf("%d%d",&d1.mm,&d1.dd);

   display(d1);

   printf("\n enter mm and dd for date 2 :: ");
   scanf("%d%d",&d2.mm,&d2.dd);

   display(d2);

   scanf("%d");
 }

 void display(struct date tmp)
  {
     switch(tmp.mm)
     {

        case 1:
               printf("%d-january-%d",tmp.dd,tmp.yy);break;
        case 2:
               printf("%d-february-%d",tmp.dd,tmp.yy);break;
        case 3:
               printf("%d-march-%d",tmp.dd,tmp.yy);break;
        case 4:
               printf("%d-april-%d",tmp.dd,tmp.yy);break;
        case 5:
               printf("%d-may-%d",tmp.dd,tmp.yy);break;
        case 6:
               printf("%d-june-%d",tmp.dd,tmp.yy);break;
        case 7:
               printf("%d-july-%d",tmp.dd,tmp.yy);break;
        case 8:
               printf("%d-august-%d",tmp.dd,tmp.yy);break;
        case 9:
               printf("%d-sepetember-%d",tmp.dd,tmp.yy);break;
        case 10:
               printf("%d-octumber-%d",tmp.dd,tmp.yy);break;
        case 11:
               printf("%d-nevember-%d",tmp.dd,tmp.yy);break;
        case 12:
               printf("%d-december-%d",tmp.dd,tmp.yy);break;

        default:
               printf("\n your month is not valide");       
     }
  }