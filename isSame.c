#include <stdio.h>
#include <string.h>

int main()
{
  char arr[100];
  scanf("%s", arr);
  for (int i = 0; i < strlen(arr)+1; i++)
  {
    if (arr[i] != arr[i+1])
    {
      printf("%c", arr[i]);
    }
  }
  return 0;
}