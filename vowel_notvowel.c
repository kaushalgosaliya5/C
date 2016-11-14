# include <stdio.h>
void main()
{
  char ch;

  printf ("\n enter any charecter :");
  scanf ("%c",&ch);

  if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf ("this charecter is vowel : %c",ch);
  }

  else
  {
    printf("this charecter is not-vowel : %c",ch);
  }

  scanf ("%d");
}