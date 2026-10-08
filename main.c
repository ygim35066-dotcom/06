#include <stdio.h>

void square_void(int a) {
    a = a * a; 
}

int square_return(int a) {
    return (a * a); 
}

int main(void) {
    int a1 = 2;
    square_void(a1);
    printf("void result a = %d\n", a1); 

    int a2 = 2;
    a2 = square_return(a2);
    printf("return result a = %d\n", a2); 
    return 0;
}