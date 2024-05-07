#include "stdio.h"


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void result_printer(int a) {
    printf("%d", a);
}

int main() {
    
    int sum = add(2,3);
    int diff = subtract(sum, 1);
    result_printer(diff);   
    

    return 0;
}