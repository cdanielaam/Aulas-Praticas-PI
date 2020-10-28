#include <stdio.h>
int main () {
  
  int a,b,c;
 
  printf("Insira tres numeros inteiros:\n");
  scanf("%d %d %d",&a,&b,&c);
  
  if (a >= (b+c) || b >= a+c || c >= b+a)
    printf("(%d, %d, %d) nao definem um triangulo\n",a,b,c);
    if  ((a <= 0) || (b <= 0) || (c <= 0))
    printf("(%d, %d, %d) nao definem um triangulo\n",a,b,c);
    else
    printf("(%d, %d, %d) definem um triangulo\n",a,b,c);

return 0;
}
