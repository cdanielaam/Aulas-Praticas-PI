#include <stdio.h>
int main (){
  int x;
  printf("Insira um numero inteiro:\n");
  scanf("%d", &x);

  if (x >= 0)
    printf("%d\n",x);
  else
    printf("%d\n",-1*x);
  return 0;
}
