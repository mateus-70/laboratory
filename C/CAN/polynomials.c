#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#include "poly.h"


void poly_add(double* p1, double* p2, double* result){
    // limpar a variavel result
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++)
        result[i]=0;
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++)
        result[i] = p1[i] + p2[i];
}

void poly_mult(double* p1, double* p2, double* result){
    // limpar a variavel result
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++)
        result[i]=0;

    double temp[POLYNOMIAL_MAX_COEFICIENTS]={0};
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++){
        for(int j=0; j<POLYNOMIAL_MAX_COEFICIENTS; j++){
            if(i+j < POLYNOMIAL_MAX_COEFICIENTS){
                temp[i+j] += p1[i] * p2[j];
            }else{
                assert(p1[i] * p2[j] < 0.000001);
            }
        }
    }
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++)
        result[i]=temp[i];
}

// finds the derivative of a polynomial 
// p1 -> polynomial to derivate
// derivative -> will hold the coeficients of the derivative
void d_poly(double * p1, double* derivative) {
    int i;
    for(i=1; i< POLYNOMIAL_MAX_COEFICIENTS; i++)
        derivative[i-1]=p1[i]*i;
    derivative[POLYNOMIAL_MAX_COEFICIENTS - 1]=0; // every df is one degree lower than f.
////    puts("printing derivative\n");
////    for(int l=0; l<POLYNOMIAL_MAX_COEFICIENTS; l++)
////        if(derivative[l] != 0)
////            printf("%lfx^%d + ", derivative[l], l);
////    puts("\n\nend printing derivative\n");
////    printf("Valor do ponteiro e '%p'=%lf\n",(void*) (derivative+3), *(derivative+1));
}

double eval_P(double *P, double x){
    double fx=0;
    for(int i=0; i<POLYNOMIAL_MAX_COEFICIENTS; i++)
        fx+= P[i] * pow(x, i);
    return fx;
}

// This function approximates the root of a given interval for a given polynomial.
// Requires: interval -> that should have exactly one root.
// Requires: polinomial -> array of coef.
double newton_raphson(double a, double b, double *P){
    double x_base = (a+b)/2;
    double x_next=0;
    double dP[POLYNOMIAL_MAX_COEFICIENTS];
    d_poly(P, dP);
    
    int i;
    printf("a=%.2lf, b=%.2lf, x_base=%.2lf, x_next=%.2lf\n",a,b,x_base,x_next );
    for(i=0; i < MAX_ITERATIONS && fabs(eval_P(P, x_base)) > 0.001; i++){
        x_next = x_base - eval_P(P, x_base)/eval_P(dP, x_base);
        x_base = x_next;
        printf("x_base = %lf.\n", x_base);
    }
////    printf("Valor do ponteiro e '%p'=%lf\n",(void *)(dP+1), *(dP+1));
////    printf("\na=%lf;b=%lf\n", a, b);
////    for(int o=0; o<POLYNOMIAL_MAX_COEFICIENTS; o++)
////        if(P[o]!=0)
////            printf("%lfx^%d + ", P[o], o);
////    for(int o=0; o<POLYNOMIAL_MAX_COEFICIENTS; o++)
////        if(P[o]!=0)
////            printf("%lfx^%d + ", dP[o], o);
//    printf("x_base=%lf, x_next=%lf\n ", x_base, x_next);
//    puts("Funcao normal:");
//    for(int k=0; k< POLYNOMIAL_MAX_COEFICIENTS; k++)
//        printf("%lf x^%d \n", P[k], k);
//
//    puts("Derivada;");
//    for(int k=0; k< POLYNOMIAL_MAX_COEFICIENTS; k++)
//        printf("%lf x^%d \n", dP[k], k);
//        
    puts("\n\n");
    assert(i!=MAX_ITERATIONS);
    return x_next; // that is approx the root
}

