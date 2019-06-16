#include <stdio.h>  // CRIPTOGRAFIA ROT13 
#include <stdlib.h> // A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
#include <string.h>

int main(void)
{
    /*
    int i;
    char Palavra[255];
    
    printf ("Digite a palavra que deseja criptografar: ");
    scanf (" %s", Palavra);

    for (i = 0; i < strlen(Palavra); i++)
    {
        if (Palavra[i] >= 'a' && Palavra[i] <= 'z')
        {
            Palavra[i] = Palavra[i] + 13;
        }
            if (Palavra[i] > 'z')
            {
                Palavra[i] = Palavra[i] - 26;
            }
    }   
    
    printf ("%s\n", Palavra);
	for(int k=0; k<255; k++)
		printf("%d - %d\n", k, (int) Palavra[k]);

    return 0;
    */
char c=0;
    for( int i=0; i < 500; i++, c++)
        printf("int %d = char '%c', (int) char %d\n", i, c, (int) c);
}
