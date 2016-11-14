 # include <stdio.h>
 void main()
 {
    int num,i,sum;

    printf ("\n enter any number :");
    scanf ("%d",&num);

    i=1;
    sum=0;

    while ( i < num )
    {
      if ( num % i == 0 )
      {
        sum = sum + i;
      }
      i++;
    }

    if (sum == num)
    {
     printf ("\n %d is perfect num",num);
    }
    else
    {
     printf ("\n %d is perfect num",num);
    }
   scanf ("%d");
 }