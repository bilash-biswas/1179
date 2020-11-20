#include <stdio.h>
#define size 40
int main (){
    int X = 0, pares[size], impares[size];
    int i, j, count = 0;
    int cp = 0, ci = 0;

    for(i=0; i<15; i++) {
        scanf("%d", &X);

        if(X % 2 == 0) {
            pares[cp] = X;
            ++cp;
            if(cp == 5) {
                for(j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n",j,pares[j]);
                    cp = 0;
                }
            }
        }
        else {
            impares[ci] = X;
            ++ci;
            if(ci == 5) {
                for(j=0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                    ci = 0;
                }
            }
        }

    }
    for(j = 0; j < ci; j++) printf("impar[%d] = %d\n", j, impares[j]);
    for(j = 0; j < cp; j++) printf("par[%d] = %d\n", j, pares[j]);
}
