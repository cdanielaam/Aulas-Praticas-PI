#include <stdio.h>
int main () {
  
  int a,b,c;
 
  printf("Insira tres numeros inteiros:\n");
  scanf("%d %d %d\n",&a,&b,&c);
  
if ((a >= (b+c) || b >= a+c || c >= b+a) || ((a <= 0) || (b <= 0) || (c <= 0)))
printf("(%d, %d, %d) nao definem um triangulo\n",a,b,c);

else if ((a == b) && (b == c) && (a == c))
printf("(%d, %d, %d) definem um triangulo equilatero\n",a,b,c);
else if (((a == b) && (a != c)) || ((a == c) && (b != a)) || ((c == b) && (c != a)))
printf("(%d, %d, %d) definem um triangulo isosceles\n" ,a,b,c);
else if ((a != b) && (a != c) && (c != b))
printf("(%d, %d, %d) definem um triangulo escaleno\n",a,b,c);

return 0;
}