#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 5;
  int a;
  char str[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
  printf("int:%d ", i);

  for (a = 1; a < strlen(str); a++) {
    printf("%c", str[a - 1]);
  }

  printf(" total_size=%d", a);
  return 0;
}