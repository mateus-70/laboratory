#include <stdio.h>
#include <math.h>

#define MAX_ORDER 5

double lpoly[MAX_ORDER + 1][MAX_ORDER + 1]={{0}}; // a_0 + a_1 + ... a_n \n b_0 ... b_n ...

void poly_add(double p1[], double p2[], double* result, int size ){
    for(int i=0; i<size; i++)
        result[i]=p1[i] + p2[i];
}

void poly_mult(double p1[], double p2[], double* result, int size ){
    double temp[size]={0};
    for(int i=0; i<size; i++)
        for(int j=0; j<size; j++){
        
        }
}

void find_poly(void){
    lpoly[0][0]=lpoly[1][1]=1; // 
    // (j+1)P_{j+1} = (2j+1)xP_j - jP_{j-1}
    

}

int main(void){
    
}
