#include <stdio.h>
int foo(int x){
    return x*x*x;
}
int main(void){
    int i = foo(2);
    printf("i=%d.\n", i);
    return 0;
}
