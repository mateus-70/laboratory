#include <stdio.h>

int main() {
int  codigo, veiculos, maior, menor, soma, soma1, total, total1; 

float acidentes, maiorind, maiorindd, menorind, menorindd, media, media1;

char cidade[20];

soma=0;
soma1=0;
media=0;
media1=0;

codigo=1;

       while(codigo<=1){

printf("Digite o nome da cidade\n");
scanf("%s",&cidade);

printf("Digite o codigo da cidade\n");
scanf("%d",&codigo);

printf("Numero de veiculos de passeios\n");
scanf("%d",&veiculos);

printf("Numero de acidentes com vitimas\n");
scanf("%f",&acidentes);

       if(acidentes>maiorind){
            maiorind=acidentes;
            maior=codigo;
            maiorindd=acidentes;
       }
       else{
            menorind=acidentes;
            menor=codigo;
            menorindd=acidentes;    
       }
       if(veiculos<2000){
            soma=soma+acidentes;
            total=total+1;
        }
        if(veiculos>0){
            soma1+=veiculos;
            total1=total1+1;
           }
       }
     media=soma/total;
     media1=soma1/total1;

     codigo=codigo+1;

       printf("\nmaior indice de acidentes: %d  %.2f  \n",maior,maiorindd,maiorind);
       printf("\nmenor indice de acidentes: %d  %.2f  \n",menor,menorindd,menorind);
       printf("\nMedia de veiculos nas cidades juntas: %.2f  \n",media1);
       printf("\nMedia de acidentes de transito nas cidades com menos de 2000 veiculos: %.2f",media);
       return 0;
}
