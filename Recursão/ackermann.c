#include <stdio.h>

int ackermann (int m, int n){
  if (m == 0){
    return n + 1;
  }
  else if (n == 0 && m > 0){
    return ackermann(m-1,1);
  }
  if (m > 0 && n > 0){
    return ackermann(m-1, ackermann(m,n-1));
  }
  return 0;
}
int main () {
  int m = 0, n = 0;
  scanf("%d", &m);
  scanf("%d", &n);
  int resultado = ackermann(m, n);
  printf("%d", resultado);
  return 0;
}