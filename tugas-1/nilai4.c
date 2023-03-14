// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c, d;
    int nilaiMax;
    
    printf("masukan nilai 1: ");
    scanf("%d", &a);
    
    printf("masukan nilai 2: ");
    scanf("%d", &b);
    
    printf("masukan nilai 3: "); 
    scanf("%d", &c);

    printf("masukan nilai 4: ");
    scanf("%d", &d);
    
    if (a > b && a > c && a > d) {
        printf("nilai max sama dengan a: %d\n", a);
    } else if (b > a && b > c && c > d) {
        printf("nilai max sama dengan b %d\n", b);
    } else if (c > a && c > b && c > d) {
        printf("nilai max sama dengan c: %d\n", c);
    } else if (d > a && d > b && d > c) {
        printf("nilai max sama dengan d: %d\n", d);
    }

    return 0;
}
