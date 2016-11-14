#include<stdio.h>
struct stu
 {
   int rollno;
   char name[10];
   float age;
 };

 void main()
 {
    struct stu x;

    printf("\n enter roll number ::");
    scanf("%d",&x.rollno);

    printf("\n enter name ::");
    scanf("%s",&x.name);

    printf("\n enter age ::");
    scanf("%f",&x.age);

    printf("\n ROLL NO IS :: %d",x.rollno);
    printf("\n NAME IS :: %s",x.name);
    printf("\n AGE IS :: %.2f",x.age);

    scanf("%d");
 }