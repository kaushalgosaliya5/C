# include <stdio.h>
void main()
{
   char ch;          // ch = choice
   float n1,n2,ans;

   printf ("\n [1] addition \n [2] subtriction \n [3] multiplication \n [4] diviction");

   printf ("\n enter your choice ( + | - | * | /  ) :");
   scanf ("%c",&ch);

   printf ("\n enter your friest number :");
   scanf ("%f",&n1);

   printf ("\n enter your second number :");
   scanf ("%f",&n2);


   switch (ch)

   {
     case '+':
              {
                ans = n1 + n2;break;
              }
     case '-':
              {
                ans = n1 - n2; break;
              }
      case '*':
              {
                ans = n1 * n2;break;
              }

     case '/':
              {
                ans = n1 / n2;break;
              }
   }

   printf ("\n your ans answer is : %.2f",ans);
   scanf ("%f");
}