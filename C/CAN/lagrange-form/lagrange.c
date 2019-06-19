#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#define MAX_LE

/*
void poly_add(double* p1, double* p2, double* result){
    // limpar a variavel result
    for(int i=0; i<SIZE_MAX; i++)
        result[i]=0;
    for(int i=0; i<SIZE_MAX; i++)
        result[i] = p1[i] + p2[i];
}

void poly_mult(double* p1, double* p2, double* result){
    // limpar a variavel result
    for(int i=0; i<SIZE_MAX; i++)
        result[i]=0;

    double temp[SIZE_MAX]={0};
    for(int i=0; i<SIZE_MAX; i++){
        for(int j=0; j<SIZE_MAX; j++){
            if(i+j < SIZE_MAX){
                temp[i+j] += p1[i] * p2[j];
            }else{
                assert(p1[i] * p2[j] < 0.000001);
            }
        }
    }
    for(int i=0; i<SIZE_MAX; i++)
        result[i]=temp[i];
}*/

int main(void){
    double lege_poly_coef[][];

    double add_vector[SIZE_MAX]={0}; // Necessário inicializar antes de chamar a funcao
    poly_add(v1, v2, add_vector);
    printf("Add:\n");
    for(int i=0; i<SIZE_MAX; i++){
        if(fabs(add_vector[i]) > 0.000001)
            printf("%.0lf*x^%d\n", add_vector[i], i);
    }
    //puts("Multiplicacao\n\n\n\n");

    double mult_vector[SIZE_MAX]={0}; // Necessário inicializar antes de chamar a funcao
    poly_mult(v1, v2, mult_vector);
    printf("\nMult:\n");
    for(int i=0; i<SIZE_MAX; i++)
        if(fabs(mult_vector[i]) > 0.000001)
            printf("%.0lf*x^%d\n", mult_vector[i], i);
}

