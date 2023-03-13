#include <stdio.h>

int main() {
    // Write C code here
    int A= 1;
    int B= 2;
    char C[5];
    
    memcpy(C, (A>B ? "A lebih besar dari B" : "B lebih besar dari A"), 5);
    
    printf("%s", C);
    
    return 0;
}
