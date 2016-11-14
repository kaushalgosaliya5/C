 int fact(int n)
{
   if (n == 1)
    {
      return 1;
    }

   else
   {
     return n * fact(n-1);
   }
}

int sqr(int n)
{
  return n*n;
}

int qub(int n)
{
  return n*n*n;
}
