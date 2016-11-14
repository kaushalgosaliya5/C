
int squr(int x)
 {
   return (x * x);
 }


int area(int x)
{
 return (4*x);
}

int rev(int x)
{
  int rem,rnum=0;

  while(x > 0)
   {
     rem = x % 10;
     x = x / 10;
     rnum = rnum * 10 + rem;
   }

  return rnum;
}