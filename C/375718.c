#include <stdio.h>
#include <string.h>

int main(void)
{
  char teste[] = "aaa1bbb2ccc3ddd";
  char* ptr1 = teste;
  char* ptr2;

  while ((ptr2 = strpbrk(ptr1, "1234567890")) != NULL)
  {
    int size = ptr2 - ptr1;
    printf("%.*s\n", size, ptr1);
    ptr1 = ++ptr2;
  }

  if (ptr1 != NULL)
    printf("%s\n", ptr1);
}

