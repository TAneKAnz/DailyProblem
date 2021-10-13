#include <stdio.h>
void isPrime(int x)
{
  for (int i = 1; i < x; i++)
  {
    if (x % i == 0 && i != 1)
    {
      printf("not Prime number\n");
      x = 0;
    }
  }
  if (x != 0)
  {
    printf("Prime number\n");
  }
}
int main()
{
  int number;
  printf("Enter number : ");
  scanf("%d", &number);
  if (number >= 1)
  {
    isPrime(number);
  }
  else
  {
    printf("not Prime number\n");
  }
  return 0;
}

