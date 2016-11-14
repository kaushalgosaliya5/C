 # include <stdio.h>
 void main()
 {
    int num,i,sum;

    printf ("\n enter any number :");
    scanf ("%d",&num);

    for(i=1,sum=0;i<=num;i++)
    {
      if ( num % i == 0 )
      {
        sum = sum + i;
      }
    }

    if (sum == num)
    {
     printf ("\n %d is perfect num",num);
    }
    else
    {
     printf ("\n %d is perfect not-num",num);
    }
   scanf ("%d");
 }