#include <stdio.h>
int main (){
  int a,b,c,max;
  printf("Insira tres numeros inteiros:\n");
  scanf("%d %d %d", &a,&b,&c);

  if (a > b)
    max = a;
    else
      max = b;
  if (max > c)
    printf("%d\n",max);
  else
    printf("%d\n",c);
  return 0;
}
