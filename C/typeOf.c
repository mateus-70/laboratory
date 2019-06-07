#include <stdio.h>
int main(void){
    unsigned long x;
    double y;
    printf("Os tamanhos sao: %d e %d.\n", (int)sizeof(x), (int)sizeof(y));
    typeof(x) var=5;
    printf("var=%lu.\n",var);
    return 0;
}
