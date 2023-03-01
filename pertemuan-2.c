// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int jumlahkan() {
    printf("\n jumlahkan : \n");
    int a = 2, b = 3, x = 0, d = 3;
    
    x = (++a, b+=a, d+=b);
    printf("%d\n", x);
    return 0;
}

int dataCasting () {
    printf("\n ---data casting --- \n");
    float f_num;
    int i_num;
    
    printf("Enter any integer: ");
    scanf("%d", &i_num);
    
    f_num = (float)i_num;
    
    printf("\n The floating point cariant of %d is = %f\n", i_num, f_num);
    
    return 0;
}

int ternary() {
    // Write C code here
    printf("\n ternary : \n");
    
    int c = 10;
    int d = 11;
    bool e = (c<d) ? true : false;
    
    printf("%d\n", e);
}

int postfix() {
    // x++ : merupakan postfix
    // ++x : merupakan prefix
    // jika y = ++x; // 1;
    // jika y = x++ // 0;
    
    printf("\n postfix : \n");
    int x = 0;
    int y = x++;
    
    printf("isi y: %d\n", y);
    printf("isi x: %d\n", x);
    
    y = x++;
    
    printf("isi y prosses2: %d\n", y);
    printf("isi x prosses2: %d\n", x);
    
    return 0;
}

int ganjilGenap() {
    printf("\n\n Ganjil Genap \n");
    int x;
    
    printf("enter a number: ");
    scanf("%d", &x);
    
    if (x == 0) {
        printf("%d is equal to zero", x);
    } else if (x%2 == 0) {
        printf("%d is even\n", x);  
    } else {
        printf("%d is odd\n", x);
    }
    
    return 0;
}

int zeroInt () {
    int num;
    
    printf("\n Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) {
        printf("\n The number value is equal to zero");
    } else if (num > 0) {
        printf("\n The number is possitive");
    } else {
        printf("\n The number is negative");
    }
    
    return 0;
}

// Main Program here
int main() {
    // Write C code here
    int a = 2, b = 3, x = 0;
    x = (a++, b+=a);
    printf("%d\n", x);
    
    ternary();
    postfix();
    jumlahkan();
    ganjilGenap();
    dataCasting();
    zeroInt();
    return 0;
}
