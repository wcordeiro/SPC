#include<stdio.h>

int main () {
    int i, n, tam, D[31], E[31];
    while (scanf("%d", &n)>0) {
        int total=0;
        for (i=0; i<31; i++) D[i]=E[i]=0;
        char pe;
        for (i=0; i<n; i++) {
            scanf ("%d %c", &tam, &pe);
            if(pe=='D') D[tam-30]++;
            if(pe=='E') E[tam-30]++;
        }
        for (i=0; i<31; i++) {
            if (D[i]<=E[i]) total += D[i];
            else total += E[i];
        }
        printf ("%d\n", total);
    }
    return 0;
}
