# include <stdio.h>
void main()
{

  int ch,n1,n2,ans;

  printf ("|-------------menu-------------|");
  printf ("\n [1] addition.");
  printf ("\n [2] subtraction.");
  printf ("\n [3] multiplication.");
  printf ("\n [4] diviction.");
  printf ("\n [5] moduluse ");
  printf ("\n|------------------------------|");

  printf ("\n enter your choice :");
  scanf ("%d",&ch);

  printf ("\n enter your first number :");
  scanf ("%d",&n1);

  printf ("\n enter your second number :");
  scanf ("%d",&n2);

  switch (ch)

  {
    case 1:
             {
                ans = n1 + n2;break;
             }

    case 2:
             {
                 ans = n1 - n2;break;
             }
    case 3:
             {
                 ans = n1 * n2;break;
             }
    case 4:
             {
                ans = n1 / n2;break;
             }
    case 5:
             {
                 ans = n1 % n2;break;
             }
    default :
              {
               printf ("\n invalide operater");break;
              }
   }
  printf ("\n\n your answer is : %d",ans);
  scanf ("%d");
}