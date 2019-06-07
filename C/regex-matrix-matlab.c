#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>

#define MAX_STR_MATRIX 3000
#define ERROR_MESSAGE_LENGTH 3000
#define PATTERN_MAX_LENGTH 3000

int main(void)
{
    int reti; //return integer
    char error_message[ERROR_MESSAGE_LENGTH]={0};
    char str[MAX_STR_MATRIX] = "[2 3; 5 1;]"; // ficaria melhor se esta matriz: "[2 3; 5 -1]", sem o ponto-vírgula no final fosse encontrada também, mas não é necessário.

    regex_t regex;
    
    char pattern[PATTERN_MAX_LENGTH]={0}; 
    char rgx_real_matrix[PATTERN_MAX_LENGTH]; // Não será utilizada diretamente por regcomp(), mas indiretamente.
    snprintf(rgx_real_matrix, PATTERN_MAX_LENGTH, "\\[([[:blank:]]?[+-]?\\d([[:blank:]]+[+-]?\\d)*;)+\\]");
    snprintf(pattern, PATTERN_MAX_LENGTH, "^[[:blank:]]*%s[[:blank:]]*$",rgx_real_matrix);
    reti = regcomp( &regex, pattern, REG_EXTENDED);
    if(reti)
    {
        snprintf(error_message, ERROR_MESSAGE_LENGTH, "%s%s%s", "Falha em (", __func__, "): Não foi possivel compilar expressao regular!\n\n");
        printf(error_message);
        exit(1);
    }

    reti = regexec(&regex, str, 0, NULL, 0);
    if(!reti)
        printf("Encontrou.\n");
    else
        if(reti == REG_NOMATCH)
            printf("Nao encontrou.\n");
        else
        {
            regerror(reti, &regex, str, sizeof(str));
            fprintf(stderr, "Regex match failed: %s\n", str);
            exit(1);
        }
    regfree(&regex);
}
