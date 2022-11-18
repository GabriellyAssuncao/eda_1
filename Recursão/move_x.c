#include <stdio.h>

int countX = 0;

void printax(int n) {
  if (n > 0) {
    printf("x");
    printax(n - 1);
  }
}

void printa(char str[]) {

  if ( * str) {

    if ( * str == 'x') {
      countX++;
      printa(str + 1);
    } else {
      printf("%c", * str);
      printa(str + 1);
    }

  } else {
    printax(countX);
    printf("\n");
  }
}

int main() {

  char str[100];

  scanf("%[^\n]", str);

  printa(str);

  return 0;
}