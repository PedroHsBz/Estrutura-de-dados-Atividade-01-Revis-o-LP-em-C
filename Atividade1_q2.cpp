#include <stdio.h>

int main() {
	
    int valor, notas50, notas20, notas10, resto;
    
    scanf("%d", &valor);
    notas50 = valor / 50;  
    resto = valor % 50;
    notas20 = resto / 20;
    resto = resto % 20;
    notas10 = resto / 10;
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);

    return 0;
}
