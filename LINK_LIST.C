#include<stdio.h>

struct stu
{
  int rollno;
  float age;
};

void changeval(struct stu *);

void main()
{
   struct stu x;

   x.rollno = 10;
   x.age = 10.5;

   changeval(&x);

   printf("\n your roll no is :: %d",x.rollno);
   printf("\n your age is :: %.2f",x.age);

   scanf("%d");
}

void changeval(struct stu *p)
{
   p -> rollno = 20;
   p -> age = 20.5;
}