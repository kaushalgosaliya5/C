 # include <stdio.h>
 void main()
 {
    float n1,n2,ans;

    printf ("\n enter value of n1 :");
    scanf ("%f",&n1);

    printf ("\n enter value of n2 :");
    scanf ("%f",&n2);

    if ( n1 > n2 )
    {
       ans = n1 / n2;
    }

    else
    {
      ans = n1 * n2;
    }
  printf ("\n your answer is : %.2f",ans);
  scanf ("%f");
 }