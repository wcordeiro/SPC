#include <stdio.h>
#include <math.h>

int Primo (int nb)
{
    int i, contar, teste,limite;
	teste = contar = 0;
	limite = sqrt(nb) + 1;
	if (nb % 2 == 0)
	   teste = 1;
	else{
	    for (i = 3 ; i < limite && ! teste; i+=2, contar++)
	          if (nb % i == 0)
	              teste = 1;
	}
	if (!teste)
	    printf ("sim");
	else
	    printf ("nao");
	return 0;
}

int main()
{
  int n;
  scanf("%d",&n);
  Primo(n);
}

