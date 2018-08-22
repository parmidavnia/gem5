#include <stdio.h>
int main() {
    int matA[2][2]={0,1,2,3};
    int matB[2][2]={0,1,2,3};
    int matC[2][2]={0,0,0,0};
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
            printf("%d\n",matC[i][j]);
        } 
    }
}