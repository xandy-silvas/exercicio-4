#include <stdio.h>
#include <math.h>

double potencia(double x, int n) {
    return pow(x, n);
}

int main() {
    int x, n;
    
    printf("Digite a base (x): ");
    scanf("%d", &x);
    printf("Digite o expoente (n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Por favor, digite um expoente não-negativo.\n");
        return 1;
    }
    
    printf("%d elevado a %d = %.0f\n", x, n, potencia(x, n));

    return 0;
}
