#include<stdio.h>

union stu
{
  int rollno;
  float age;
};

void main()
{
  union stu x;

 //  x.rollno = 10;
   x.age=20.5;

 // printf("\n your roll no is :: %d",x.rollno);
  printf("\n your age is :: %.f",x.age);

  scanf("%d");
}