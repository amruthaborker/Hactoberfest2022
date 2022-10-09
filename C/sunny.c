#include <stdio.h>
#include <math.h>
#include <stdbool.h > //for the use of boolean type
 
bool is_sunny(int);
 
int main(void)
{
  int n;
 
  printf("List of sunny number from 0 to 100 range: \n");
  for (n = 0; n < 100; ++n)
  {
    if (is_sunny(n))
      printf("%d\n", n);
  }
 
  return 0;
 
}
 
bool is_sunny(int n)
{
  int square = sqrt(n + 1);
 
  return (square *square == n);
}
