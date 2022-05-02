#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry
* @argc: argument count
* @argv: argument vector

* Return: 0
*/
int main(int argc, char *argv[])
{
  int i;
  int sum;
  
  if (argc == 1)
  {
    printf("0\n");
    return (0);
  }
  count = 1;
  while (count < argc)
  {
    for (i = 0; argv[count] != '\0'; i++)
    {
      if (!(isdigit(argv[count])))
      {
        printf("Error\n");
        return (1);
      }
    }
    sum = sum + atoi(argv[count]);
    count++;
  }
  printf("%d\n", sum);
  
  return (0);
}
