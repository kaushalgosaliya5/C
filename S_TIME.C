#include<stdio.h>

struct time
 {
    int hh;
    int mm;
    int ss;
 };

long int sec(struct time);
void display(long int);

void main()
 {
   struct time t1,t2;
   long int x1,x2,dif;


   printf("\n enter time 1 format hh mm ss :: ");
   scanf("%d%d%d",&t1.hh,&t1.mm,&t1.ss);

   x1 = sec(t1);

   printf("\n enter time 2 format hh mm ss :: ");
   scanf("%d%d%d",&t2.hh,&t2.mm,&t2.ss);

   x2 = sec(t2);

   if(x1 > x2)
    {
      dif = x1 - x2;
    }
   else
    {
      dif = x2 - x1;
    }

   display(dif);

   scanf("%d");
 }

 long int sec(struct time s)
  {
     return s.hh*3600 + s.mm*60 + s.ss;
  }

 void display(long int dif)
  {
     int h,m,s;

     h = dif / 3600;
     s = dif - (h*3600);
     m = s / 60;
     s = s - (m*60);

     printf("\n my two time difference is :: %d-%d-%d",h,m,s);
     scanf("%d");
  }