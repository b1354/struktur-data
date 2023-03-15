// Online C compiler to run C program online
#include <stdio.h>

int forDoubleVar()
{
    int i,j;
    
    for (i=0, j=10; i<=j; j--, i++) {
        printf("i=%d j=%d\n", i, j);
    }
    
    return 0;
}

int cariPrima()
{
    int flag = 0, i, num;
    printf("\nEnter any number: ");
    scanf("%d", &num);
    
    for(i=2; i<num/2;i++)
    {
        if(num%i == 0) {
            flag =1;
            break;
        }
    }
    if (flag == 1) {
        printf("\n%d is omposite number\n", num);
    } else {
        printf("\n%d is a prime number\n", num);
    }
    return 0;
}

int main() {
    cariPrima();
    forDoubleVar();

    return 0;
}
