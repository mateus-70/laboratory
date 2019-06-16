#include <stdio.h>
#define N 1

double lcoef[N+1][N+1]={{0}};

void lege_coef(){
    int n, i;
    lcoef[0][0] = lcoef[1][1] = 1;
    for (n = 2; n <= N; n++) {
       lcoef[n][0] = -(n - 1) * lcoef[n - 2][0] / n;
       for (i = 1; i <= n; i++)
            lcoef[n][i] = ((2 * n - 1) * lcoef[n - 1][i - 1]
            - (n - 1) * lcoef[n - 2][i] ) / n;
    }
}


int main(void) {
	// your code goes here
	lege_coef();
	for(int i=0; i<N+1; i++){
		for(int j=0; j< N+1; j++){
			printf("%lf ",lcoef[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
