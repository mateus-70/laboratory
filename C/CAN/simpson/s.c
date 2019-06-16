#include <stdio.h>
#include <math.h>

double f1 (double x){ return pow(x,4)+3*x-2;}
double f2 (double x){ return sin(x*x+1);}
double f3 (double x){ return pow(2.71828,x*x-4);}


int main(){

    printf("Digite o inicio do intervalo: ");
    double inicio, fim;
    scanf("%lf", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%lf", &fim);
    printf("Digite o número 'k' de blocos: ");
    int k; 
    scanf("%d", &k);
    printf("Escolha funcao: 1 2 3");
    int funcao;
    scanf("%d", &funcao);
    
    if(funcao==1){
        double y[100]={};
        for(int o=0; o<k-1; o++){
            y[o]=f1(o);
        }

        for(j = 0; j-1 < 2; j++)
        {
            for(int ){
            
            }
        }
            
    }else if(funcao == 2){
    }else if(funcao == 3){
    }
    return 0;
}
