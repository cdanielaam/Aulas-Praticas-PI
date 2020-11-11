#include <stdio.h>
int main () {
  
  int a,b,c,r;

  printf("Indique os coeficientes da seguinte equacao:\n ax^2 + bx + c = 0\n\t");
  scanf("%d %d %d",&a,&b,&c);

  r = (b*b)-4*a*c;

  if (r == 0)
  printf(" raiz dupla\n");
  else 
    if (r > 0) 
  printf(" duas raizes distintas\n");
    else printf(" sem raizes\n");
  

return 0;
}

 /* Exemplos
  raiz dupla: 9 -12 4 ou 0 -1 3
  duas raizes: 1 -3 -10
  sem raizes: 5 3 5 */

  