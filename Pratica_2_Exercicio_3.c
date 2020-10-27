#include <stdio.h>
int main (){
  int x,y;
  printf("Insira dois numeros inteiros:\n");
  scanf("%d %d", &x,&y);

  if (x > y)
    printf("%d\n",x);
  else
    printf("%d\n",y);
  return 0;
}
