// Online C compiler to run C program online
#include <stdio.h>

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
        printf("\n%d is omposite number", num);
    } else {
        printf("\n%d is a prime number", num);
    }
    return 0;
}

int main() {
    cariPrima();

    return 0;
}
